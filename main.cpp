#include "include/hash.hpp" 

int main(int argc, char* argv[]) {
   
    char* message = messageHandler(argv, argc);

    hash_md5* hashMD5 = new hash_md5(message);
    hash_sha256* hashSHA256 = new hash_sha256(message);
    hash_sha224* hashSHA224 = new hash_sha224(message);
    hash_sha512* hashSHA512 = new hash_sha512(message);
    hash_sha384* hashSHA384 = new hash_sha384(message);

    hashMD5->hash_message();
    hashSHA256->hash_message();
    hashSHA224->hash_message();
    hashSHA512->hash_message();
    hashSHA384->hash_message();


    std::cout << "MD5 : " << *hashMD5->get_hash() << std::endl <<
                 "SHA256 : " << *hashSHA256->get_hash() << std::endl << 
                 "SHA224 : " << *hashSHA224->get_hash() << std::endl << 
                 "SHA512 : " << *hashSHA512->get_hash() << std::endl << 
                 "SHA384 : " << *hashSHA384->get_hash() << std::endl;


    delete hashMD5;
    delete hashSHA256;
    delete hashSHA224;
    delete hashSHA512;
    delete hashSHA384;
}

