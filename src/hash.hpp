#include "../include/hash.hpp"


template<typename T>
hash<T>::hash(char* hash) {
    using message_block = message_block<T>;

    this->message = new char[std::strlen(hash) + 1];
    std::strcpy(this->message, hash);

    this->message_hashed = new std::string("");

    this->size = new __uint128_t(std::strlen(hash)*8);

}

template<typename T>
hash<T>::~hash() {
    delete this->message_hashed;
    delete this->size;
    delete this->padded_message;
    delete this->padded_size;
    delete this->message_blocks;
    delete this->nb_blocks;
    delete this->IV;
}

template<typename T>
char* hash<T>::get_message() {
    return this->message;
}

template<typename T>
char* hash<T>::get_padded_message() {
    return this->padded_message;
}

template<typename T>
__uint128_t* hash<T>::get_size() {
    return this->size;
}

template<typename T>
int* hash<T>::get_padded_size() {
    return this->padded_size;
}   

template<typename T>
message_block<T>** hash<T>::get_message_blocks() {
    return this->message_blocks;
}

template<typename T>
std::string* hash<T>::get_hash() {
    return this->message_hashed;
}

template<typename T>
void hash<T>::set_message(char* messsage) {
    this->message = message;
}


template<typename T>
void hash<T>::pad_hash() {

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

template<typename T>
void hash<T>::hash_message() {

    this->init_iv();
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
