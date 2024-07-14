#include "md5.hpp"

K::K() {
    this->k = new uint[64];
    for(int i = 0; i < 64; i++) {
        const_cast<uint&>(this->k[i]) = (uint)(std::pow(2,32) * std::abs(std::sin(i+1)));
    }
}

K::~K() {
    delete this->k;
}

const uint* K::get_k() {
    return this->k;
}
