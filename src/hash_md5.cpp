#include "../include/hash.hpp"

hash_md5::hash_md5(const char* message) : hash<u_int>(message) {

    using Word = Word<u_int>;

    this->IV = new Word*[hash_md5::IV_SIZE];
    
}

void hash_md5::init_iv() {

    using Word = Word<u_int>;

    this->IV[0] = new Word(MD5_Const::A_init);
    this->IV[1] = new Word(MD5_Const::B_init);
    this->IV[2] = new Word(MD5_Const::C_init);
    this->IV[3] = new Word(MD5_Const::D_init);
}


void hash_md5::pad_hash() {


    int tmp_pad = *this->size + 1;

    while(tmp_pad % hash_md5::SIZE_BLOCK != 448) {
        tmp_pad+=1;
    }

    this->padded_size = new int(tmp_pad+sizeof(uint64_t)*8);

    if(*this->padded_size % hash_md5::SIZE_BLOCK != 0) {
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
        (this->padded_message)[std::strlen(this->message)  + bytesToAdd - 7 + i-1] = tmp;
            
    }

}

void hash_md5::rounds(message_block<u_int>* block) {

    using Word = Word<u_int>;

    Word* words = block->get_words();

    K_MD5* k = new K_MD5();

    Word* _A = new Word(*this->IV[0]);
    Word* _B = new Word(*this->IV[1]);
    Word* _C = new Word(*this->IV[2]);
    Word* _D = new Word(*this->IV[3]);



    int r[4][16] ={
        {7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22},
        {5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20},
        {4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23},
        {6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21}
    };

    for(int j = 0; j < 4; j+=1) {

        for(int i = 0; i < 16; i++) {

           

            Word* _F = new Word(0); 

            switch(j) {
                case 0:
                    _F->set_Word(F(*_B,*_C,*_D));
                    break;
                case 1: 
                    _F->set_Word(G(*_B,*_C,*_D));
                    break;
                case 2:
                    _F->set_Word(H(*_B,*_C,*_D));
                    break;
                case 3:
                    _F->set_Word(I(*_B,*_C,*_D));
                    break;
            }

            Word* tmp = new Word(_D->get_Word());

            _D->set_Word(_C);
            _C->set_Word(_B);
       
            Word _word = revert(words[index_i(j*16+i)]);

            Word* K_Word = new Word(k->get_k()[j*16+i]);
            Word tmp_B = (*_A + *_F + *K_Word + _word);

            //std::cout << std::hex << block->get_block() << std::endl;
            _B->set_Word( left_rotate(tmp_B  , r[j][i]) + *_B); //(left_rotate(tmp_B , r[j][i]) + _B) & 0xFFFFFFFF;
            
            _A->set_Word(tmp);

            delete _F, K_Word;

            //std::cout << std::dec << j*16+i  << " " <<std::hex << _A << " " << _B << " " << _C << " " << _D << std::endl;

        }

    }

    *this->IV[0] += *_A;
    *this->IV[1] += *_B;
    *this->IV[2] += *_C;
    *this->IV[3] += *_D;

    delete _A, _B, _C, _D, k , words;
}

void hash_md5::split_message() {
    
    using message_block = message_block<u_int>;

    this->nb_blocks = new int((*this->padded_size)/hash_md5::SIZE_BLOCK);

    this->message_blocks = new message_block*[*(this->nb_blocks)];

    u_char* tmp = new u_char[hash_md5::SIZE_BLOCK/8];
    for(int i = 0; i < *this->nb_blocks ; i++) {
        std::memcpy(tmp, this->padded_message + i*hash_md5::SIZE_BLOCK/8, hash_md5::SIZE_BLOCK/8);
        this->message_blocks[i] = new message_block(tmp,hash_md5::NB_WORDS,hash_md5::SIZE_BLOCK);
    }
}


void hash_md5::concat_hash(){
    std::stringstream ss;

    for(int i = 0; i < hash_md5::IV_SIZE; i++) {
        ss << std::setw(8) << std::setfill('0') << std::hex << revert(*this->IV[i]).get_Word();
    }
   
    *this->message_hashed = ss.str();
}