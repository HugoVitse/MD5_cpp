#include <string>
#include <cstdint>
#include <stdio.h>
#include <iostream>
#include <bitset>
#include <cstring>
#include <cmath>
#include <iostream>
#include <sstream>
#include <iomanip>

#pragma once

#define A_init 0x67452301
#define B_init 0xefcdab89
#define C_init 0x98badcfe
#define D_init 0x10325476

u_int F(u_int X, u_int Y, u_int Z);

u_int G(u_int X, u_int Y, u_int Z);

u_int H(u_int X, u_int Y, u_int Z);

u_int I(u_int X, u_int Y, u_int Z);

int index_i(int i);

u_int left_rotate(u_int X, int n);

u_int revert(u_int X);

char* messageHandler(char* args[], int nb_args);

char* inputMessage();


class K {

public:

    K();
    ~K();
    const uint* get_k();

private:

    const uint* k;

};
class message_block {

public:
    
    message_block();

    message_block(u_char* block, int id);

    ~message_block();

    u_char* get_block();

    int get_id();

    u_char** get_words();

    void split_block();
    

private:

    u_char* block;
    int id;
    u_char** words;
    int size;
};

class hash_md5 {

public:

    hash_md5(char* hash);

    ~hash_md5();

    char* get_message();

    char* get_padded_message();

    uint64_t* get_size();

    int* get_padded_size();

    message_block** get_message_blocks();

    void pad_hash();

    void hash_message();

    void split_message();

    void rounds(message_block* block, K* k);

    uint16_t* get_empreinte();

    void concat_hash();

    std::string* get_hash();

private:
    
    char* message;
    std::string* hash;
    uint64_t* size;
    char* padded_message;
    int* padded_size;
    message_block** message_blocks;
    int* size_blocks;
    u_int* A;
    u_int* B;
    u_int* C;
    u_int* D;
};

class InccorectSize : public std::exception {

private:
    std::string message;

public:
    InccorectSize(const std::string& msg) : message(msg) {}

    // Méthode virtuelle qui retourne la description de l'exception
    const char* what() const noexcept override {
        return message.c_str();
    }
};



class InccorectArgs : public std::exception {

private:
    std::string message;

public:
    InccorectArgs(const std::string& msg) : message(msg) {}

    // Méthode virtuelle qui retourne la description de l'exception
    const char* what() const noexcept override {
        return message.c_str();
    }
};
