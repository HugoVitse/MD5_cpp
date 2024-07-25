#include "../include/hash.hpp"

template <typename T>
Word<T>::Word(T _word) {
    this->word = _word;
}

template <typename T>
Word<T>::Word() {}

template <typename T>
Word<T>::~Word() {}

template <typename T>
T Word<T>::get_Word() {
    return this->word;
}

template <typename T>
void Word<T>::set_Word(T _word) {
    this->word = _word;
}

template <typename T>
void Word<T>::set_Word(Word<T>* _word) {
    this->word = _word->get_Word();
}

template <typename T>
void Word<T>::set_Word(Word<T> _word) {
    this->word = _word.get_Word();
}

template <typename T>
Word<T> Word<T>::operator+(Word<T> _word){
    const T mod = sizeof(T) == 4 ? 0xFFFFFFFF : 0xFFFFFFFFFFFFFFFF;
    return Word<T>( (this->get_Word()+_word.get_Word()) & mod);
}

template <typename T>
void Word<T>::operator+=(Word<T> _word){
    const T mod = sizeof(T) == 4 ? 0xFFFFFFFF : 0xFFFFFFFFFFFFFFFF;
    this->set_Word( (this->get_Word() + _word.get_Word()) & mod);
}

template <typename T>
Word<T> Word<T>::operator<<(int nbbits){
    return Word<T>( this->get_Word() << nbbits);
}

template <typename T>
Word<T> Word<T>::operator>>(int nbbits){
    return Word<T>( this->get_Word() >> nbbits);
}

template <typename T>
Word<T> Word<T>::operator~(){
    return Word<T>( ~this->get_Word());
}

template <typename T>
Word<T> Word<T>::operator&(Word<T> _word) {
    return Word<T>( this->get_Word() & _word.get_Word() );
}

template <typename T>
Word<T> Word<T>::operator|(Word<T> _word){
    return Word<T>( this->get_Word() | _word.get_Word() );
}

template <typename T>
Word<T> Word<T>::operator^(Word<T> _word) {
    return Word<T>( this->get_Word() ^ _word.get_Word());
}

template <typename T>
void Word<T>::operator|=(Word<T> _word){
    this->set_Word( this->get_Word() | _word.get_Word());
}

// template <typename T>
// std::ostream& operator<<(std::ostream& os, const Word<T>& _word) {
//     os << _word.get_Word();
//     return os;
// }