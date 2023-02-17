//
// Created by Uriel on 17/02/2023.
//
#include <iostream>
// HERNANDO URIEL TORRES DE LUNA 2030342
using namespace std;

struct vertice{
    string letra;
    struct vertice *siguiente;
};

typedef struct vertice VERTICE;
typedef VERTICE *PVERTICE;

struct arista{
    PVERTICE vertice1;
    PVERTICE vertice2;
    struct arista *siguiente;
};

typedef struct arista ARISTA;
typedef ARISTA *PARISTA;

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}