#include "../include/hash.hpp"

hash_sha512::hash_sha512(char* message) : hash<u_int64_t>(message) {

    using Word = Word<u_int64_t>;

    this->IV = new Word*[hash_sha512::IV_SIZE];
    
}

void hash_sha512::init_iv() {

    using Word = Word<u_int64_t>;

    this->IV[0] = new Word(SHA512_Const::H0_init);
    this->IV[1] = new Word(SHA512_Const::H1_init);
    this->IV[2] = new Word(SHA512_Const::H2_init);
    this->IV[3] = new Word(SHA512_Const::H3_init);
    this->IV[4] = new Word(SHA512_Const::H4_init);
    this->IV[5] = new Word(SHA512_Const::H5_init);
    this->IV[6] = new Word(SHA512_Const::H6_init);
    this->IV[7] = new Word(SHA512_Const::H7_init);

}

void hash_sha512::pad_hash() {
    
    int tmp_pad = *this->size + 1;

    while(tmp_pad % hash_sha512::SIZE_BLOCK != 896) {
        tmp_pad+=1;
    }

    this->padded_size = new int(tmp_pad+sizeof(__uint128_t)*8);

    if(*this->padded_size % hash_sha512::SIZE_BLOCK != 0) {
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
   
    for(int i = 0; i < 16; i++) {
        tmp = (*this->size >> (i*8));
        (this->padded_message)[std::strlen(this->message)  + bytesToAdd -  i-1] = tmp;
            
    }


}

void hash_sha512::rounds(message_block<u_int64_t>* block) {
    using Word = Word<u_int64_t>;
    using K_SHA2 = K_SHA2<u_int64_t>;

    Word* words_block = block->get_words();
    Word* words = new Word[80];

    for(int i = 0; i < 16; i++) {
        words[i] = Word(words_block[i]);
    }

    for(int i = 16; i< 80; i++) {
        words[i] = (sigma_1(words[i-2]) + words[i-7] + sigma_0(words[i-15]) + words[i-16]);
    }


    K_SHA2* k = new K_SHA2();

    u_int64_t tmpK[80] = {0x428a2f98d728ae22,0x7137449123ef65cd,0xb5c0fbcfec4d3b2f,0xe9b5dba58189dbbc,0x3956c25bf348b538,0x59f111f1b605d019,0x923f82a4af194f9b,0xab1c5ed5da6d8118,0xd807aa98a3030242,0x12835b0145706fbe,0x243185be4ee4b28c,0x550c7dc3d5ffb4e2,0x72be5d74f27b896f,0x80deb1fe3b1696b1,0x9bdc06a725c71235,0xc19bf174cf692694,0xe49b69c19ef14ad2,0xefbe4786384f25e3,0x0fc19dc68b8cd5b5,0x240ca1cc77ac9c65,0x2de92c6f592b0275,0x4a7484aa6ea6e483,0x5cb0a9dcbd41fbd4,0x76f988da831153b5,0x983e5152ee66dfab,0xa831c66d2db43210,0xb00327c898fb213f,0xbf597fc7beef0ee4,0xc6e00bf33da88fc2,0xd5a79147930aa725,0x06ca6351e003826f,0x142929670a0e6e70,0x27b70a8546d22ffc,0x2e1b21385c26c926,0x4d2c6dfc5ac42aed,0x53380d139d95b3df,0x650a73548baf63de,0x766a0abb3c77b2a8,0x81c2c92e47edaee6,0x92722c851482353b,0xa2bfe8a14cf10364,0xa81a664bbc423001,0xc24b8b70d0f89791,0xc76c51a30654be30,0xd192e819d6ef5218,0xd69906245565a910,0xf40e35855771202a,0x106aa07032bbd1b8,0x19a4c116b8d2d0c8,0x1e376c085141ab53,0x2748774cdf8eeb99,0x34b0bcb5e19b48a8,0x391c0cb3c5c95a63,0x4ed8aa4ae3418acb,0x5b9cca4f7763e373,0x682e6ff3d6b2b8a3,0x748f82ee5defb2fc,0x78a5636f43172f60,0x84c87814a1f0ab72,0x8cc702081a6439ec,0x90befffa23631e28,0xa4506cebde82bde9,0xbef9a3f7b2c67915,0xc67178f2e372532b,0xca273eceea26619c,0xd186b8c721c0c207,0xeada7dd6cde0eb1e,0xf57d4f7fee6ed178,0x06f067aa72176fba,0x0a637dc5a2c898a6,0x113f9804bef90dae,0x1b710b35131c471b,0x28db77f523047d84,0x32caab7b40c72493,0x3c9ebe0a15c9bebc,0x431d67c49c100d4c,0x4cc5d4becb3e42b6,0x597f299cfc657e2a,0x5fcb6fab3ad6faec,0x6c44198c4a475817};

    Word* _H0 = new Word(*this->IV[0]);
    Word* _H1 = new Word(*this->IV[1]);
    Word* _H2 = new Word(*this->IV[2]);
    Word* _H3 = new Word(*this->IV[3]);
    Word* _H4 = new Word(*this->IV[4]);
    Word* _H5 = new Word(*this->IV[5]);
    Word* _H6 = new Word(*this->IV[6]);
    Word* _H7 = new Word(*this->IV[7]);

    for(int j = 0; j < 80; j+=1) {
        
        
        Word* K_Word = new Word(tmpK[j]/*k->get_k()[j]*/);

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

void hash_sha512::split_message() {

    using message_block = message_block<u_int64_t>;

    this->nb_blocks = new int((*this->padded_size)/hash_sha512::SIZE_BLOCK);

    this->message_blocks = new message_block*[*(this->nb_blocks)];

    u_char* tmp = new u_char[hash_sha512::SIZE_BLOCK/8];
    for(int i = 0; i < *this->nb_blocks; i++) {
        std::memcpy(tmp, this->padded_message + i*hash_sha512::SIZE_BLOCK/8, hash_sha512::SIZE_BLOCK/8);
        this->message_blocks[i] = new message_block(tmp,hash_sha512::NB_WORDS, hash_sha512::SIZE_BLOCK);
    }
}


void hash_sha512::concat_hash(){
    std::stringstream ss;

    for(int i = 0; i < hash_sha512::IV_SIZE; i++) {
        ss << std::setw(16) << std::setfill('0') << std::hex << (*this->IV[i]).get_Word();
    }
   
    *this->message_hashed = ss.str();
}