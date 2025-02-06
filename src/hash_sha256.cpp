#include "../include/hash.hpp"

hash_sha256::hash_sha256(const char* message) : hash<u_int>(message) {

    using Word = Word<u_int>;

    this->IV = new Word*[hash_sha256::IV_SIZE];
    
}

void hash_sha256::init_iv() {

    using Word = Word<u_int>;

    this->IV[0] = new Word(SHA256_Const::H0_init);
    this->IV[1] = new Word(SHA256_Const::H1_init);
    this->IV[2] = new Word(SHA256_Const::H2_init);
    this->IV[3] = new Word(SHA256_Const::H3_init);
    this->IV[4] = new Word(SHA256_Const::H4_init);
    this->IV[5] = new Word(SHA256_Const::H5_init);
    this->IV[6] = new Word(SHA256_Const::H6_init);
    this->IV[7] = new Word(SHA256_Const::H7_init);

}

void hash_sha256::pad_hash() {

    int tmp_pad = *this->size + 1;

    while(tmp_pad % hash_sha256::SIZE_BLOCK != 448) {
        tmp_pad+=1;
    }

    this->padded_size = new int(tmp_pad+sizeof(uint64_t)*8);

    if(*this->padded_size % hash_sha256::SIZE_BLOCK != 0) {
        throw InccorectSize("Incorrect size");
    }

    this->padded_message = new char[ (*this->padded_size)/8 + 1 ]; 
    std::strcpy(this->padded_message, this->message); 

    int bytesToAdd = (*this->padded_size -  *this->size)/8; 
    char tmp = 128;
    this->padded_message[std::strlen(this->message)] =  tmp;

    for(int i = 1; i < bytesToAdd; i++) {
        this->padded_message[std::strlen(this->message) + i] = 0;
    }
   
    for(int i = 0; i < 8; i++) {
        tmp = (*this->size >> (i*8));
        (this->padded_message)[std::strlen(this->message)  + bytesToAdd -  i-1] = tmp;
            
    }

}

void hash_sha256::rounds(message_block<u_int>* block) {
    using Word = Word<u_int>;
    using K_SHA256 = K_SHA2<u_int>;

    Word* words_block = block->get_words();
    Word* words = new Word[64];

    for(int i = 0; i < 16; i++) {
        words[i] = Word(words_block[i]);
    }

    for(int i = 16; i< 64; i++) {
        words[i] = (sigma_1(words[i-2]) + words[i-7] + sigma_0(words[i-15]) + words[i-16]);
    }

    K_SHA256* k = new K_SHA256();

    Word* _H0 = new Word(*this->IV[0]);
    Word* _H1 = new Word(*this->IV[1]);
    Word* _H2 = new Word(*this->IV[2]);
    Word* _H3 = new Word(*this->IV[3]);
    Word* _H4 = new Word(*this->IV[4]);
    Word* _H5 = new Word(*this->IV[5]);
    Word* _H6 = new Word(*this->IV[6]);
    Word* _H7 = new Word(*this->IV[7]);

    for(int j = 0; j < 64; j+=1) {
        
        Word* K_Word = new Word(k->get_k()[j]);

        Word T1 = (*_H7 + SIGMA_1(*_H4) + CH(*_H4,*_H5,*_H6) + *K_Word + words[j]);
          
        Word T2 = SIGMA_0(*_H0) + MAJ(*_H0,*_H1,*_H2);

        _H7->set_Word(_H6);
        _H6->set_Word(_H5);
        _H5->set_Word(_H4);
        _H4->set_Word( (*_H3 + T1) );
        _H3->set_Word(_H2);
        _H2->set_Word(_H1);
        _H1->set_Word(_H0);
        _H0->set_Word(T1+T2);

    }
    

    *this->IV[0] += *_H0;
    *this->IV[1] += *_H1;
    *this->IV[2] += *_H2;
    *this->IV[3] += *_H3;
    *this->IV[4] += *_H4;
    *this->IV[5] += *_H5;
    *this->IV[6] += *_H6;
    *this->IV[7] += *_H7;


    delete _H0, _H1, _H2,_H3,_H4,_H5,_H6,_H7,k,words,words_block;
    
}

void hash_sha256::split_message() {

    using message_block = message_block<u_int>;

    this->nb_blocks = new int((*this->padded_size)/hash_sha256::SIZE_BLOCK);

    this->message_blocks = new message_block*[*(this->nb_blocks)];

    u_char* tmp = new u_char[hash_sha256::SIZE_BLOCK/8];
    for(int i = 0; i < *this->nb_blocks; i++) {
        std::memcpy(tmp, this->padded_message + i*hash_sha256::SIZE_BLOCK/8, hash_sha256::SIZE_BLOCK/8);
        this->message_blocks[i] = new message_block(tmp,hash_sha256::NB_WORDS, hash_sha256::SIZE_BLOCK);
    }
}


void hash_sha256::concat_hash(){
    std::stringstream ss;

    for(int i = 0; i < hash_sha256::IV_SIZE; i++) {
        ss << std::setw(8) << std::setfill('0') << std::hex << (*this->IV[i]).get_Word();
    }
   
    *this->message_hashed = ss.str();
}