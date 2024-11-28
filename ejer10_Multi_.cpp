#include <iostream>
using namespace std;

class Organizador {
public:
    void planificar() { cout << "Planificando el evento.\n"; }
};

class Invitado {
public:
    void asistir() { cout << "Asistiendo al evento.\n"; }
};

class Evento : public Organizador, public Invitado {
public:
    void ejecutarEvento() { cout << "Ejecutando el evento exitosamente.\n"; }
};

int main() {
    Evento miEvento;
    miEvento.planificar();
    miEvento.asistir();
    miEvento.ejecutarEvento();
    return 0;
}
