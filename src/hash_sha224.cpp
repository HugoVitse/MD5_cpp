#include "../include/hash.hpp"


hash_sha224::hash_sha224(const char* message) : hash_sha256(message) {

    
}


void hash_sha224::init_iv() {

    using Word = Word<u_int>;

    this->IV[0] = new Word(SHA224_Const::H0_init);
    this->IV[1] = new Word(SHA224_Const::H1_init);
    this->IV[2] = new Word(SHA224_Const::H2_init);
    this->IV[3] = new Word(SHA224_Const::H3_init);
    this->IV[4] = new Word(SHA224_Const::H4_init);
    this->IV[5] = new Word(SHA224_Const::H5_init);
    this->IV[6] = new Word(SHA224_Const::H6_init);
    this->IV[7] = new Word(SHA224_Const::H7_init);

}

void hash_sha224::concat_hash(){
    std::stringstream ss;

    for(int i = 0; i < hash_sha224::IV_SIZE - 1; i++) {
        ss << std::setw(8) << std::setfill('0') << std::hex << (*this->IV[i]).get_Word();
    }
   
    *this->message_hashed = ss.str();
}