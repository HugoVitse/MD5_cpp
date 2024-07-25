#include "../include/hash.hpp"

template <typename T> K_SHA2<T>::K_SHA2() : K<T>()
{
    int nbprime = (sizeof(T) == 4 ? 64 : 80);
    u_int* prime = ::getPrimeNumber(nbprime);

    for(int i = 0; i < nbprime; i++) {
        long double tmp = cbrtl(prime[i]) - floor(cbrtl(prime[i]));
        T utmp = 0;
        for(int j = 1; j <= 2*sizeof(T); j++) {

            T divider = floor(tmp/(pow((double)1/16,j)));

            utmp |= divider << (sizeof(T)*8 -j*4);
            tmp = tmp -(divider*(pow((double)1/16,j)));
            
        }   
        const_cast<T&>(this->k[i]) = utmp;
    }

}
