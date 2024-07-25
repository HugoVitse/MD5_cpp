#include "../include/hash.hpp"

template <typename T>
 message_block<T>::message_block(){}

template <typename T>
 message_block<T>::message_block(u_char* block, int nb_words, int size_block) {
    using Word = Word<T>;

    this->block = new u_char[size_block/8];
    std::memcpy(this->block, block,size_block/8);
    this->words = new Word[nb_words];
    this->size = size_block;

    if(size_block%nb_words != 0) {
        throw InccorectSizeBlock("Taille de block incorrect");
    }

    this->size_word = size_block/nb_words;

}

template <typename T>
 int message_block<T>::get_size() {
    return this->size;
}

template <typename T>
 message_block<T>::~message_block() {
    delete this->block;
    delete this->words;
}

template <typename T>
 u_char* message_block<T>::get_block() {
    return this->block;
}

template <typename T>
 Word<T>* message_block<T>::get_words() {
    return this->words;
}

template <typename T>
 void message_block<T>::split_block() {

    using Word = Word<T>;

    for(int i = 0; i < this->size/this->size_word; i++) {
        T* tmp = new T();
        std::memcpy(tmp, this->block + i*this->size_word/8, this->size_word/8);
        this->words[i] = revert(Word(*tmp));
    }
}
