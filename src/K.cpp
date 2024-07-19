#include "../include/hash.hpp"

K::K() {
    this->k = new uint[64];
}

K::~K() {
    delete this->k;
}

const uint* K::get_k() {
    return this->k;
}
