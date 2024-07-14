#include "hash_md5.cpp"
#include "message_block.cpp"
#include "K.cpp"
#include "functions.cpp"

int main(int argc, char* argv[]) {
   
    char* message = messageHandler(argv, argc);

    hash_md5* hash = new hash_md5(message);

    hash->hash_message();

    std::cout << *hash->get_hash() << std::endl;

}
