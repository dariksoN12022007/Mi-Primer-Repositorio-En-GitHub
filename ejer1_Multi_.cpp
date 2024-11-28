#include <iostream>
using namespace std;

class Volador {
public:
    void volar() { cout << "Volando por los cielos.\n"; }
};

class Nadador {
public:
    void nadar() { cout << "Nadando en el agua.\n"; }
};

class Superheroe : public Volador, public Nadador {
public:
    void usarPoder() { cout << "Usando poderes especiales.\n"; }
};

int main() {
    Superheroe heroe;
    heroe.volar();
    heroe.nadar();
    heroe.usarPoder();
    return 0;
}
