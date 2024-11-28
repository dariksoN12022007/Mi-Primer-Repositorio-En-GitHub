#include <iostream>
using namespace std;

class Animal {
public:
    void comer() { cout << "El animal está comiendo.\n"; }
    void dormir() { cout << "El animal está durmiendo.\n"; }
};

class Perro : public Animal {
public:
    void ladrar() { cout << "Guau guau!\n"; }
};

class Gato : public Animal {
public:
    void maullar() { cout << "Miau miau!\n"; }
};

int main() {
    Perro miPerro;
    miPerro.comer();
    miPerro.ladrar();
    
    Gato miGato;
    miGato.dormir();
    miGato.maullar();
    return 0;
}
