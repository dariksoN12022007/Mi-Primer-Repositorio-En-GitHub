#include <iostream>
using namespace std;

class Camara {
public:
    void tomarFoto() { cout << "Tomando foto.\n"; }
};

class Motor {
public:
    void volar() { cout << "Activando motores para volar.\n"; }
};

class Drone : public Camara, public Motor {
public:
    void explorar() { cout << "Explorando el entorno.\n"; }
};

int main() {
    Drone miDrone;
    miDrone.tomarFoto();
    miDrone.volar();
    miDrone.explorar();
    return 0;
}
