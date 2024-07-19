#include "../include/hash.hpp"

hash::hash(char* hash) {

    this->message = new char[std::strlen(hash) + 1];
    std::strcpy(this->message, hash);

    this->message_hashed = new std::string("");

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

    this->nb_blocks = new int((*this->padded_size)/512);


}


hash::~hash() {
    delete this->message_hashed;
    delete this->size;
    delete this->padded_message;
    delete this->padded_size;
    delete this->message_blocks;
    delete this->nb_blocks;
    delete this->IV;
}

char* hash::get_message() {
    return this->message;
}

char* hash::get_padded_message() {
    return this->padded_message;
}

uint64_t* hash::get_size() {
    return this->size;
}

int* hash::get_padded_size() {
    return this->padded_size;
}   

message_block** hash::get_message_blocks() {
    return this->message_blocks;
}

std::string* hash::get_hash() {
    return this->message_hashed;
}

void hash::pad_hash() {

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

void hash::hash_message() {

    this->pad_hash();
    this->split_message();


    for(int i = 0; i < *this->nb_blocks; i++) {
        this->message_blocks[i]->split_block();
    }

    for(int i = 0; i < *this->nb_blocks; i++) {
        this->rounds(this->message_blocks[i]);
    }

    this->concat_hash();


}
