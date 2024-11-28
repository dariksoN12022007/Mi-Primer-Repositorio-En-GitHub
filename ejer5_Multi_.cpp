#include <iostream>
using namespace std;

class Cocina {
public:
    void cocinar() { cout << "Cocinando alimentos.\n"; }
};

class Refrigeracion {
public:
    void enfriar() { cout << "Enfriando alimentos.\n"; }
};

class Frigobar : public Cocina, public Refrigeracion {
public:
    void operar() { cout << "Funcionando como frigobar.\n"; }
};

int main() {
    Frigobar frigobar;
    frigobar.cocinar();
    frigobar.enfriar();
    frigobar.operar();
    return 0;
}
