#include "md5.hpp"

u_int F(u_int X, u_int Y, u_int Z) {
    return (X & Y) | (~X & Z);
}

u_int G(u_int X, u_int Y, u_int Z) {
    return (X & Z) | (Y & ~Z);
}

u_int H(u_int X, u_int Y, u_int Z) {
    return X ^ Y ^ Z;
}

u_int I(u_int X, u_int Y, u_int Z) {
    return Y ^ (X | ~Z);
}

int index_i(int i) {
    if(i >=0 && i < 16) {
        return i;
    } else if(i >= 16 && i < 32) {
        return (5*i + 1)%16;
    } else if(i >= 32 && i < 48) {
        return (3*i + 5)%16;
    } else {
        return (7*i)%16;
    }
}

u_int left_rotate(u_int X, int n) {
    return (X << n) | (X >> (32-n));
}


u_int revert(u_int X){
    u_int tmp = 0;
    tmp |= (X & 0xFF) << 24;
    tmp |= (X & 0xFF00) << 8;
    tmp |= (X & 0xFF0000) >> 8;
    tmp |= (X & 0xFF000000) >> 24;
    return tmp;
}


char* messageHandler(char* args[], int nb_args) {

    switch(nb_args) {
        case 1:
            return inputMessage();
            break;
        case 2:
            return args[nb_args-1];
            break;
        default:
            throw InccorectArgs("Nombre d'arguments invalide");
            break;
    }
}


char* inputMessage() {
    std::string* input = new std::string();
    std::cout << "Entrez le message à hasher : ";
    std::getline(std::cin, *input);
   
    char* message = new char[input->length() + 1];

    std::strcpy(message, input->c_str());

    delete input;

    return message;
}



// for testing purposes

std::ostream& printBinary(std::ostream& os, const u_char* arr, int size) {
    for (int i = 0; i < size/8; ++i) {
        std::cout << std::bitset<8>(arr[i]) << ' ';
    }
    return os;
}

std::ostream& printBinary(std::ostream& os, const char* arr, int size) {
    for (int i = 0; i < size/8; ++i) {
        std::cout << std::bitset<8>(arr[i]) << ' ';
    }
    return os;
}

