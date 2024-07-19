#include "../include/hash.hpp"

hash_sha256::hash_sha256(char* message) : hash(message) {

    this->IV = new u_int*[hash_sha256::IV_SIZE];
    this->IV[0] = new u_int(H0_init);
    this->IV[1] = new u_int(H1_init);
    this->IV[2] = new u_int(H2_init);
    this->IV[3] = new u_int(H3_init);
    this->IV[4] = new u_int(H4_init);
    this->IV[5] = new u_int(H5_init);
    this->IV[6] = new u_int(H6_init);
    this->IV[7] = new u_int(H7_init);
    
}

void hash_sha256::pad_hash() {

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

void hash_sha256::rounds(message_block* block) {
    u_int* words_block = block->get_words();
    u_int* words = new u_int[64];

    for(int i = 0; i < 16; i++) {
        words[i] = words_block[i];
    }

    for(int i = 16; i< 64; i++) {
        words[i] = (sigma_1(words[i-2]) + words[i-7] + sigma_0(words[i-15]) + words[i-16]) & 0xFFFFFFFF;
    }

    K_SHA2* k = new K_SHA2();

    u_int _H0 = *this->IV[0];
    u_int _H1 = *this->IV[1];
    u_int _H2 = *this->IV[2];
    u_int _H3 = *this->IV[3];
    u_int _H4 = *this->IV[4];
    u_int _H5 = *this->IV[5];
    u_int _H6 = *this->IV[6];
    u_int _H7 = *this->IV[7];


    for(int j = 0; j < 64; j+=1) {

        u_int T1 = (_H7 + SIGMA_1(_H4) + CH(_H4,_H5,_H6) + k->get_k()[j] + words[j]) & 0xFFFFFFFF;
          
        u_int T2 = SIGMA_0(_H0) + MAJ(_H0,_H1,_H2);
        _H7 = _H6;
        _H6 = _H5;
        _H5 = _H4;
        _H4 = (_H3 + T1)  & 0xFFFFFFFF ;
        _H3 = _H2;
        _H2 = _H1;
        _H1 = _H0;
        _H0 = (T1 + T2) & 0xFFFFFFFF;
   

    }

    *this->IV[0] = (*this->IV[0] + _H0) & 0xFFFFFFFF;
    *this->IV[1] = (*this->IV[1] + _H1) & 0xFFFFFFFF;
    *this->IV[2] = (*this->IV[2] + _H2) & 0xFFFFFFFF;
    *this->IV[3] = (*this->IV[3] + _H3) & 0xFFFFFFFF;
    *this->IV[4] = (*this->IV[4] + _H4) & 0xFFFFFFFF;
    *this->IV[5] = (*this->IV[5] + _H5) & 0xFFFFFFFF;
    *this->IV[6] = (*this->IV[6] + _H6) & 0xFFFFFFFF;
    *this->IV[7] = (*this->IV[7] + _H7) & 0xFFFFFFFF;
    
}

void hash_sha256::split_message() {

    u_char* tmp = new u_char[512/8];
    for(int i = 0; i < (*this->padded_size)/512; i++) {
        std::memcpy(tmp, this->padded_message + i*512/8, 512/8);
        this->message_blocks[i] = new message_block(tmp, i, hash_sha256::NB_WORDS);
    }
}

void hash_sha256::concat_hash(){
    std::stringstream ss;

    for(int i = 0; i < hash_sha256::IV_SIZE; i++) {
        ss << std::setw(8) << std::setfill('0') << std::hex << (*this->IV[i]);
    }
   
    *this->message_hashed = ss.str();
}