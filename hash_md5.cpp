#include "md5.hpp"

hash_md5::hash_md5(char* hash) {

    this->message = new char[std::strlen(hash) + 1];
    std::strcpy(this->message, hash);

    this->hash = new std::string("");

    this->size = new uint64_t(std::strlen(hash)*8);


    int tmp = *this->size + 1;

    while(tmp % 512 != 448) {
        tmp+=1;
    }

    this->padded_size = new int(tmp+sizeof(uint64_t)*8);

    if(*this->padded_size % 512 != 0) {
        throw InccorectSize("Incorrect size");
    }

    this->padded_message = new char[ (*this->padded_size)/8 + 1 ]; 
    std::strcpy(this->padded_message, hash); 

    this->message_blocks = new message_block*[(*this->padded_size)/512];

    this->size_blocks = new int((*this->padded_size)/512);

    this->A = new u_int(A_init);
    this->B = new u_int(B_init);
    this->C = new u_int(C_init);
    this->D = new u_int(D_init);

}


hash_md5::~hash_md5() {
    delete this->hash;
    delete this->hash;
    delete this->size;
    delete this->padded_message;
    delete this->padded_size;
    delete this->message_blocks;
    delete this->size_blocks;
    delete this->A;
    delete this->B;
    delete this->C;
    delete this->D;
}

char* hash_md5::get_message() {
    return this->message;
}

char* hash_md5::get_padded_message() {
    return this->padded_message;
}

uint64_t* hash_md5::get_size() {
    return this->size;
}

int* hash_md5::get_padded_size() {
    return this->padded_size;
}   

message_block** hash_md5::get_message_blocks() {
    return this->message_blocks;
}

std::string* hash_md5::get_hash() {
    return this->hash;
}

void hash_md5::pad_hash() {

    int bytesToAdd = (*this->padded_size -  *this->size)/8; 

    char tmp = 128;
    this->padded_message[std::strlen(this->message)] =  tmp;

    for(int i = 0; i < 8; i++) {
        tmp = (*this->size >> (i*8));
        (this->padded_message)[std::strlen(this->message)  + bytesToAdd - 7 + i-1] = tmp;
    }

}

void hash_md5::split_message() {

    u_char* tmp = new u_char[512/8];
    for(int i = 0; i < (*this->padded_size)/512; i++) {
        std::memcpy(tmp, this->padded_message + i*512/8, 512/8);
        this->message_blocks[i] = new message_block(tmp, i);
    }
}

void hash_md5::rounds(message_block* block, K* k){
    u_char** words = block->get_words();


    u_int _A = *this->A;
    u_int _B = *this->B;
    u_int _C = *this->C;
    u_int _D = *this->D;



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

            _word |= (u_int)words[index_i(j*16+i)][0];
        
            _word |= ((u_int)words[index_i(j*16+i)][1]) << 8;

            _word |= ((u_int)words[index_i(j*16+i)][2]) << 16;
 
            _word |= ((u_int)words[index_i(j*16+i)][3]) << 24;

            u_int tmp_B = (_A + _F + k->get_k()[j*16+i] + _word) & 0xFFFFFFFF;
            //std::cout << std::hex << ((_A + _F + k->get_k()[j*16+i] + _word) & 0xFFFFFFFF) << std::endl;
            _B = (left_rotate(tmp_B , r[j][i]) + _B) & 0xFFFFFFFF;
            
            _A = tmp;

            //std::cout << std::dec << j*16+i  << " " <<std::hex << _A << " " << _B << " " << _C << " " << _D << std::endl;

        }

    }

    *this->A = (*this->A + _A);
    *this->B = (*this->B + _B);
    *this->C = (*this->C + _C);
    *this->D = (*this->D + _D);

}

void hash_md5::concat_hash(){
    std::stringstream ss;
    
    ss << std::hex << revert(*this->A) << revert(*this->B)<< revert(*this->C) << revert(*this->D);
    *this->hash = ss.str();
}


void hash_md5::hash_message() {
    this->pad_hash();
    this->split_message();

    for(int i = 0; i < *this->size_blocks; i++) {
        this->message_blocks[i]->split_block();
    }

    for(int i = 0; i < *this->size_blocks; i++) {
        this->rounds(this->message_blocks[i], new K());
    }

    this->concat_hash();

}
