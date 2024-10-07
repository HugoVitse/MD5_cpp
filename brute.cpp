#include "../include/hash.hpp"

int main(int argc, char* argv[]) {
    // if(argc != 3) {
    //     return EXIT_FAILURE;
    // }

    std::string test = argv[1];

    

    std::ifstream fichier("/usr/share/wordlists/rockyou.txt");
    if (!fichier) {
        std::cerr << "Impossible d'ouvrir le fichier !" << std::endl;
        return 1;
    }

    std::string ligne;
    while (std::getline(fichier, ligne)) { // Lire le fichier ligne par ligne
        //std::cout << ligne << std::endl; // Afficher la ligne
        char* cstr = new char[ligne.length() + 1];  // Allouer de la mémoire
        std::strcpy(cstr, ligne.c_str());
        hash_sha256* hash = new hash_sha256(cstr);
        hash->hash_message();
        if(test == *hash->get_hash()){
            std::cout << ligne << std::endl;
            break;
        }
        delete hash;
    }

    fichier.close(); // Fermer le fichier
    
    return 0;
}