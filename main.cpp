#include "include/hash.hpp"

int main(int argc, char* argv[]) {
   
    char* message = messageHandler(argv, argc);

    hash_md5* hashMD5 = new hash_md5(message);
    hash_sha256* hashSHA256 = new hash_sha256(message);

    hashMD5->hash_message();
    hashSHA256->hash_message();

    std::cout << "MD5 : " << *hashMD5->get_hash() << std::endl << "SHA256 : " << *hashSHA256->get_hash();


    delete hashMD5;
    delete hashSHA256;
}

