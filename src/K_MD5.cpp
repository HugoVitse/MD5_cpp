#include "../include/hash.hpp"

K_MD5::K_MD5() : K(){
    for(int i = 0; i < 64; i++) {
        const_cast<uint&>(this->k[i]) = (uint)(std::pow(2,32) * std::abs(std::sin(i+1)));
    }
}