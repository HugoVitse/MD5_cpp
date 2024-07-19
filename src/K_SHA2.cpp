#include "../include/hash.hpp"

K_SHA2::K_SHA2() : K(){
    u_int* prime = getPrimeNumber(64);

    for(int i = 0; i < 64; i++) {
        double tmp = cbrt(prime[i]) - floor(cbrt(prime[i]));
        u_int utmp = 0;
        for(int j = 1; j <= 8; j++) {
            u_int divider = (u_int)floor(tmp/(pow((double)1/16,j)));
            utmp |= divider << (32-j*4);
            tmp = tmp -(divider*(pow((double)1/16,j)));
            
        }   
        const_cast<uint&>(this->k[i]) = utmp;
    }

}