#include "../include/hash.hpp"

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



char* inputMessage() {
    std::string* input = new std::string();
    std::cout << "Entrez le message à hasher : ";
    std::getline(std::cin, *input);
   
    char* message = new char[input->length() + 1];

    std::strcpy(message, input->c_str());

    delete input;

    return message;
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

void printBinary(const u_int64_t arr) {
    std::cout << std::bitset<64>(arr) << ' ';
}

std::ostream& printBinary(std::ostream& os, const char* arr, int size) {
    for (int i = 0; i < size/8; ++i) {
        std::cout << std::bitset<8>(arr[i]) << ' ';
    }
    return os;
}
