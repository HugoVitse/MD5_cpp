#include "../include/hash.hpp"

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

u_int CH(u_int X, u_int Y, u_int Z) {
    return (X & Y) ^ (~X & Z);
}

u_int MAJ(u_int X, u_int Y, u_int Z) {
    return (X & Y) ^ (X & Z) ^ (Y & Z);
}

u_int SIGMA_0(u_int X) {
    return right_rotate(X, 2) ^ right_rotate(X, 13) ^ right_rotate(X, 22);
}

u_int SIGMA_1(u_int X) {
    return right_rotate(X, 6) ^ right_rotate(X, 11) ^ right_rotate(X, 25);
}

u_int sigma_0(u_int X) {
    return right_rotate(X, 7) ^ right_rotate(X, 18) ^ (X >> 3);
}

u_int sigma_1(u_int X) {
    return right_rotate(X, 17) ^ right_rotate(X, 19) ^ (X >> 10);
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

u_int right_rotate(u_int X, int n) {
    return (X >> n) | (X << (32-n));
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

bool isPrime(u_int n) {
    if(n <= 1) return false;
    for(u_int i = 2; i <= floor(sqrt(n)) +1; i++) {
        if(n%i == 0 && i != n) {
            return false;
        }
    }
    return true;
}

u_int* getPrimeNumber(u_int n) {

    u_int *prime = new u_int[n];
    u_int i = 0;
    u_int size = 0;

    while(size < n) {
        if(isPrime(i)) {
            prime[size] = i;
            size++;
        }
        i++;
    }

    return prime;

}


// for testing purposes

std::ostream& printBinary(std::ostream& os, const u_char* arr, int size) {
    for (int i = 0; i < size/8; ++i) {
        std::cout << std::bitset<8>(arr[i]) << ' ';
    }
    return os;
}

void printBinary(const u_int* arr, int size) {
    for (int i = 0; i < size/32; ++i) {
        std::cout << std::bitset<32>(arr[i]) << ' ';
    }
}

std::ostream& printBinary(std::ostream& os, const char* arr, int size) {
    for (int i = 0; i < size/8; ++i) {
        std::cout << std::bitset<8>(arr[i]) << ' ';
    }
    return os;
}

