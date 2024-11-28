#include <iostream>
using namespace std;

class Vehiculo {
public:
    void arrancar() { cout << "El vehículo está arrancando.\n"; }
};

class Camion : public Vehiculo {
public:
    void cargar() { cout << "El camión está cargando mercancía.\n"; }
};

int main() {
    Camion miCamion;
    miCamion.arrancar();
    miCamion.cargar();
    return 0;
}
