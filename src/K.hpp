#include "../include/hash.hpp"

template <typename T> K<T>::K()
{
    this->k = new T[sizeof(T)== 4 ? 64 : 80];
}

template <typename T> K<T>::~K()
{
    delete this->k;
}

template <typename T> const T* K<T>::get_k()
{
    return this->k;
}
