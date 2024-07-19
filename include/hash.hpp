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

#define H0_init 0x6a09e667
#define H1_init 0xbb67ae85
#define H2_init 0x3c6ef372
#define H3_init 0xa54ff53a
#define H4_init 0x510e527f
#define H5_init 0x9b05688c
#define H6_init 0x1f83d9ab
#define H7_init 0x5be0cd19

//MD5 functions
u_int F(u_int X, u_int Y, u_int Z);

u_int G(u_int X, u_int Y, u_int Z);

u_int H(u_int X, u_int Y, u_int Z);

u_int I(u_int X, u_int Y, u_int Z);

//SHA256 functions

u_int CH(u_int X, u_int Y, u_int Z);

u_int MAJ(u_int X, u_int Y, u_int Z);

u_int SIGMA_0(u_int X);

u_int SIGMA_1(u_int X);

u_int sigma_0(u_int X);

u_int sigma_1(u_int X);

//Utils functions
int index_i(int i);

u_int left_rotate(u_int X, int n);
u_int right_rotate(u_int X, int n);

u_int revert(u_int X);

char* messageHandler(char* args[], int nb_args);

char* inputMessage();

u_int* getPrimeNumber(u_int n);

bool isPrime(u_int n);

std::ostream& printBinary(std::ostream& os, const u_char* arr, int size);
std::ostream& printBinary(std::ostream& os, const char* arr, int size);
void printBinary(const u_int* arr, int size);

class K {

public:

    K();
    ~K();
    const uint* get_k();

protected:

    const uint* k;

};

class K_MD5 : public K {

public:

    K_MD5();

};

class K_SHA2 : public K {

public:

    K_SHA2();

};

class message_block {

public:
    
    message_block();

    message_block(u_char* block, int id, int nb_words);

    ~message_block();

    u_char* get_block();

    int get_id();

    u_int* get_words();

    void split_block();
    

private:

    u_char* block;
    int id;
    u_int* words;
    int size;
};


class hash {

public:

    hash(char* message);

    ~hash();

    char* get_message();

    char* get_padded_message();

    uint64_t* get_size();

    int* get_padded_size();

    message_block** get_message_blocks();

    virtual void pad_hash() = 0;

    void hash_message();

    virtual void split_message() = 0;

    virtual void rounds(message_block* block) = 0;

    virtual void concat_hash() = 0;

    std::string* get_hash();

protected:
    char* message;
    std::string* message_hashed;
    uint64_t* size;
    char* padded_message;
    int* padded_size;
    message_block** message_blocks;
    int* nb_blocks;
    u_int** IV;
};


class hash_md5 : public hash{
    
public:

    hash_md5(char* message);

    void rounds(message_block* block) override;

    void concat_hash() override;

    void split_message() override;

    void pad_hash() override;

private :
    static const int NB_WORDS = 16;
    static const int IV_SIZE = 4;

};

class hash_sha256 : public hash{
    
public:

    hash_sha256(char* message);

    void rounds(message_block* block) override;

    void concat_hash() override;

    void split_message() override;

    void pad_hash() override;

private :
    static const int NB_WORDS = 16;
    static const int IV_SIZE = 8;

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
