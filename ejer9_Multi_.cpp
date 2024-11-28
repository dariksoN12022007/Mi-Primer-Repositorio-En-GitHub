#include <iostream>
using namespace std;

class CamaraSeguridad {
public:
    void grabar() { cout << "Grabando video de seguridad.\n"; }
};

class SensorMovimiento {
public:
    void detectarMovimiento() { cout << "Detectando movimiento.\n"; }
};

class SistemaAlarma : public CamaraSeguridad, public SensorMovimiento {
public:
    void activarAlarma() { cout << "Activando alarma de seguridad.\n"; }
};

int main() {
    SistemaAlarma alarma;
    alarma.grabar();
    alarma.detectarMovimiento();
    alarma.activarAlarma();
    return 0;
}
