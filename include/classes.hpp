#pragma once

/**************Exceptions****************/
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


class InccorectSizeBlock : public std::exception {

private:
    std::string message;

public:
    InccorectSizeBlock(const std::string& msg) : message(msg) {}

    // Méthode virtuelle qui retourne la description de l'exception
    const char* what() const noexcept override {
        return message.c_str();
    }
};
/****************************************/



/****************Words*******************/
template <typename T>
class Word {

public:
    Word();
    Word(T _word);
    ~Word();
    T get_Word();
    void set_Word(T _word);
    void set_Word(Word* _word);
    void set_Word(Word _word);

    Word operator+(Word _word);
    void operator+=(Word _word);

    Word operator<<(int nbbits);
    Word operator>>(int nbbits);

    Word operator~();
    Word operator&(Word _word);
    Word operator^(Word _word);
    Word operator|(Word _word);
    void operator|=(Word _word);


private:
    T word;
};

#include "../src/Word.hpp"

template <typename T>
class message_block {

public:
    
    message_block();

    message_block(u_char* block, int nb_words,int size_block);

    ~message_block();

    u_char* get_block();

    Word<T>* get_words();

    void split_block();
    
    int get_size();

private:

    u_char* block;
    Word<T>* words;
    int size;
    int size_word;
};

#include "../src/message_block.hpp"
/****************************************/

/******************Ks********************/
template <typename T>
class K {

public:

    K();
    ~K();
    const T* get_k();

protected:

    const T* k;

};

#include "../src/K.hpp"

class K_MD5 : public K<u_int> {

public:

    K_MD5();

};

template <typename T>
class K_SHA2 : public K<T> {

public:

    K_SHA2();

};

#include "../src/K_SHA2.hpp"


/****************************************/


/****************hashs*******************/
template <typename T>
class hash {

public:

    hash(const char* message);

    ~hash();

    char* get_message();

    char* get_padded_message();

    __uint128_t* get_size();

    int* get_padded_size();

    message_block<T>** get_message_blocks();

    virtual void init_iv() = 0;

    virtual void pad_hash() = 0;

    void set_message(char* message);

    void hash_message();

    virtual void split_message() = 0;

    virtual void rounds(message_block<T>* block) = 0;

    virtual void concat_hash() = 0;

    std::string* get_hash();

protected:
    char* message;
    std::string* message_hashed;
    __uint128_t* size;
    char* padded_message;
    int* padded_size;
    message_block<T>** message_blocks;
    int* nb_blocks;
    Word<T>** IV;
};


#include "../src/hash.hpp"


class hash_md5 : public hash<u_int>{
    
public:

    hash_md5(const char* message);

    void init_iv() override;

    void rounds(message_block<u_int>* block) override;

    void concat_hash() override;

    void split_message() override;

    void pad_hash() override;

private :
    static const int NB_WORDS = 16;
    static const int SIZE_BLOCK = 512;
    static const int IV_SIZE = 4;

};

class hash_sha256 : public hash<u_int>{
    
public:

    hash_sha256(const char* message);

    void init_iv() override;

    void rounds(message_block<u_int>* block) override;

    void concat_hash() override;

    void split_message() override;

    void pad_hash() override;

private :
    static const int NB_WORDS = 16;
    static const int SIZE_BLOCK = 512;
    static const int IV_SIZE = 8;

};

class hash_sha512 : public hash<u_int64_t>{
    
public:

    hash_sha512(const char* message);

    void init_iv() override;

    void rounds(message_block<u_int64_t>* block) override;

    void concat_hash() override;

    void split_message() override;

    void pad_hash() override;

private :
    static const int NB_WORDS = 16;
    static const int SIZE_BLOCK = 1024;
    static const int IV_SIZE = 8;

};

class hash_sha224 : public hash_sha256 {

public:
    hash_sha224(const char* message);

    void init_iv() override;

    void concat_hash() override;

private:
    static const int IV_SIZE = 8;
};

class hash_sha384 : public hash_sha512 {

public:
    hash_sha384(const char* message);

    void init_iv() override;

    void concat_hash() override;

private:
    static const int IV_SIZE = 8;
};
/****************************************/
