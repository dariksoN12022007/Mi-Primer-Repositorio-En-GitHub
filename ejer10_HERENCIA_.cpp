#include <iostream>
using namespace std;

class Instrumento {
public:
    void tocar() { cout << "El instrumento está sonando.\n"; }
};

class Guitarra : public Instrumento {
public:
    void afinar() { cout << "Afinando la guitarra.\n"; }
};

int main() {
    Guitarra miGuitarra;
    miGuitarra.afinar();
    miGuitarra.tocar();
    return 0;
}
