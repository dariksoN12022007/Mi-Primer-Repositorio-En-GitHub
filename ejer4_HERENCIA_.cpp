#include <iostream>
using namespace std;

class Vehiculo {
public:
    string marca, modelo;
    void arrancar() { cout << "El vehículo arranca\n"; }
    void detener() { cout << "El vehículo se detiene\n"; }
};

class Auto : public Vehiculo {
public:
    void tocarBocina() { cout << "Bip Bip!\n"; }
};

class Moto : public Vehiculo {
public:
    void hacerWheelie() { cout << "Haciendo un wheelie!\n"; }
};

int main(){
    Auto a

    a.tocarBocina();
}