#include "../include/hash.hpp"

message_block::message_block(){}

message_block::message_block(u_char* block, int id, int nb_words) {


    this->block = new u_char[512/8];
    std::memcpy(this->block, block,64);
    this->id = id;
    this->words = new u_int[nb_words];
  

}


message_block::~message_block() {
    delete this->block;
    delete this->words;
}

u_char* message_block::get_block() {
    return this->block;
}

int message_block::get_id() {
    return this->id;
}  

u_int* message_block::get_words() {
    return this->words;
}

void message_block::split_block() {
    for(int i = 0; i < 16; i++) {
        u_int* tmp = new u_int();
        std::memcpy(tmp, this->block + i*32/8, 32/8);
        this->words[i] = revert(*tmp);
    }
}
