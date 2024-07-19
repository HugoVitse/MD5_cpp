#include "../include/hash.hpp"

hash_md5::hash_md5(char* message) : hash(message) {

    this->IV = new u_int*[hash_md5::IV_SIZE];
    this->IV[0] = new u_int(A_init);
    this->IV[1] = new u_int(B_init);
    this->IV[2] = new u_int(C_init);
    this->IV[3] = new u_int(D_init);
    
}


void hash_md5::pad_hash() {

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

void hash_md5::rounds(message_block* block) {
    u_int* words = block->get_words();

    K_MD5* k = new K_MD5();

    u_int _A = *this->IV[0];
    u_int _B = *this->IV[1];
    u_int _C = *this->IV[2];
    u_int _D = *this->IV[3];



    int r[4][16] ={
        {7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22},
        {5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20},
        {4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23},
        {6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21}
    };

    for(int j = 0; j < 4; j+=1) {

        for(int i = 0; i < 16; i++) {

           

            u_int _F = 0; 

            switch(j) {
                case 0:
                    _F = F(_B,_C,_D);
                    break;
                case 1: 
                    _F = G(_B,_C,_D);
                    break;
                case 2:
                    _F = H(_B,_C,_D);
                    break;
                case 3:
                    _F = I(_B,_C,_D);
                    break;
            }

            u_int tmp = _D;

            _D = _C;
            _C = _B;
            u_int _word = 0;

            _word = revert(words[index_i(j*16+i)]);

            u_int tmp_B = (_A + _F + k->get_k()[j*16+i] + _word) & 0xFFFFFFFF;
            //std::cout << std::hex << block->get_block() << std::endl;
            _B = (left_rotate(tmp_B , r[j][i]) + _B) & 0xFFFFFFFF;
            
            _A = tmp;

            //std::cout << std::dec << j*16+i  << " " <<std::hex << _A << " " << _B << " " << _C << " " << _D << std::endl;

        }

    }

    *this->IV[0] +=  _A;
    *this->IV[1] +=  _B;
    *this->IV[2] +=  _C;
    *this->IV[3] +=  _D;
}

void hash_md5::split_message() {

    u_char* tmp = new u_char[512/8];
    for(int i = 0; i < (*this->padded_size)/512; i++) {
        std::memcpy(tmp, this->padded_message + i*512/8, 512/8);
        this->message_blocks[i] = new message_block(tmp, i, hash_md5::NB_WORDS);
    }
}


void hash_md5::concat_hash(){
    std::stringstream ss;

    for(int i = 0; i < hash_md5::IV_SIZE; i++) {
        ss << std::setw(8) << std::setfill('0') << std::hex << revert(*this->IV[i]);
    }
   
    *this->message_hashed = ss.str();
}