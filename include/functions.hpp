#include "hash.hpp"

template <typename T>
Word<T> F(Word<T> X, Word<T> Y, Word<T> Z);
template <typename T>
Word<T> G(Word<T> X, Word<T> Y, Word<T> Z);
template <typename T>
Word<T> H(Word<T> X, Word<T> Y, Word<T> Z);
template <typename T>
Word<T> I(Word<T> X, Word<T> Y, Word<T> Z);

//SHA256 functions

template <typename T>
Word<T> CH(Word<T> X, Word<T> Y, Word<T> Z);
template <typename T>
Word<T> MAJ(Word<T> X, Word<T> Y, Word<T> Z);
template <typename T>
Word<T> SIGMA_0(Word<T> X);
template <typename T>
Word<T> SIGMA_1(Word<T> X);
template <typename T>
Word<T> sigma_0(Word<T> X);
template <typename T>
Word<T> sigma_1(Word<T> X);

//Utils functions

int index_i(int i);

template <typename T>
Word<T> left_rotate(Word<T> X, int n);
template <typename T>
Word<T> right_rotate(Word<T> X, int n);

template <typename T>
Word<T> revert(Word<T> X);

char* messageHandler(char* args[], int nb_args);
char* inputMessage();

bool isPrime(u_int n);

std::ostream& printBinary(std::ostream& os, const u_char* arr, int size);
void printBinary(const u_int64_t arr);
std::ostream& printBinary(std::ostream& os, const char* arr, int size);
void printBinary(const u_int* arr, int size);


template <typename T> Word<T> F(Word<T> X, Word<T> Y, Word<T> Z) 
{
    return (X & Y) | (~X & Z);
}

template <typename T> Word<T> G(Word<T> X, Word<T> Y, Word<T> Z) {
    return (X & Z) | (Y & ~Z);
}

template <typename T> Word<T> H(Word<T> X, Word<T> Y, Word<T> Z) {
    return X ^ Y ^ Z;
}

template <typename T> Word<T> I(Word<T> X, Word<T> Y, Word<T> Z) {
    return Y ^ (X | ~Z);
}

template <typename T> Word<T> CH(Word<T> X, Word<T> Y, Word<T> Z) {
    return (X & Y) ^ (~X & Z);
}

template <typename T> Word<T> MAJ(Word<T> X, Word<T> Y, Word<T> Z) {
    return (X & Y) ^ (X & Z) ^ (Y & Z);
}

template <typename T> Word<T> SIGMA_0(Word<T> X) {
    return right_rotate(X, sizeof(T) == 4 ? 2 : 28) ^ right_rotate(X, sizeof(T) == 4 ? 13 : 34) ^ right_rotate(X, sizeof(T) == 4 ? 22 : 39);
}

template <typename T> Word<T> SIGMA_1(Word<T> X) { 
    return right_rotate(X, sizeof(T) == 4 ? 6 : 14) ^ right_rotate(X, sizeof(T) == 4 ? 11 : 18) ^ right_rotate(X, sizeof(T) == 4 ? 25 : 41);
}

template <typename T> Word<T> sigma_0(Word<T> X) {
    return right_rotate(X, sizeof(T) == 4 ? 7 : 1) ^ right_rotate(X, sizeof(T) == 4 ? 18 : 8) ^ (X >> (sizeof(T) == 4 ? 3 : 7) );
}

template <typename T> Word<T> sigma_1(Word<T> X) {
    return right_rotate(X, sizeof(T) == 4 ? 17 : 19) ^ right_rotate(X, sizeof(T) == 4 ? 19 : 61) ^ (X >> (sizeof(T) == 4 ? 10 : 6) );
}
template <typename T> Word<T> left_rotate(Word<T> X, int n) {
    return (X << n) | (X >> (sizeof(T)*8-n));
}

template <typename T> Word<T> right_rotate(Word<T> X, int n) {
    return (X >> n) | (X << (sizeof(T)*8-n));
}

template <typename T> Word<T> revert(Word<T> X){
    using Word = Word<T>;
    Word tmp = Word(0);
    
    if(sizeof(T) == 4) {
        tmp |= (X & 0xFF) << 24;
        tmp |= (X & 0xFF00) << 8;
        tmp |= (X & 0xFF0000) >> 8;
        tmp |= (X & 0xFF000000) >> 24;

        return tmp;
    }

    if(sizeof(T) == 8) {
        tmp |= (X & 0xFF) << 56;
        tmp |= (X & 0xFF00) << 40;
        tmp |= (X & 0xFF0000) << 24;
        tmp |= (X & 0xFF000000) << 8;
        tmp |= (X & 0xFF00000000) >> 8;
        tmp |= (X & 0xFF0000000000) >> 24;
        tmp |= (X & 0xFF000000000000) >> 40;
        tmp |= (X & 0xFF00000000000000) >> 56;
        return tmp;
    }



}

