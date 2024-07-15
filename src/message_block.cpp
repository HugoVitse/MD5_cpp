#include "../include/md5.hpp"

message_block::message_block(){}

message_block::message_block(u_char* block, int id) {


    this->block = new u_char[512/8];
    std::memcpy(this->block, block,64);
    this->id = id;
    this->words = new u_char*[16];
    for(int i = 0; i < 16; i++) {
        this->words[i] = new u_char[32/8];
    }

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

u_char** message_block::get_words() {
    return this->words;
}

void message_block::split_block() {
    for(int i = 0; i < 16; i++) {
        u_char* tmp = new u_char[32/8];
        std::memcpy(tmp, this->block + i*32/8, 32/8);
        this->words[i] = tmp;
    }
}
