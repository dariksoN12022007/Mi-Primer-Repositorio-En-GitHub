#include <iostream>
using namespace std;

class Terrestre {
public:
    void conducir() { cout << "Conduciendo en tierra.\n"; }
};

class Aereo {
public:
    void volar() { cout << "Volando en el aire.\n"; }
};

class VehiculoAnfibio : public Terrestre, public Aereo {
public:
    void operar() { cout << "Operando como un vehículo anfibio.\n"; }
};

int main() {
    VehiculoAnfibio anfibio;
    anfibio.conducir();
    anfibio.volar();
    anfibio.operar();
    return 0;
}
