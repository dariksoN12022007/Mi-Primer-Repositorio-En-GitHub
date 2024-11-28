#include <iostream>
using namespace std;

class Pantalla {
public:
    void mostrar() { cout << "Mostrando contenido en la pantalla.\n"; }
};

class Bateria {
public:
    void cargar() { cout << "Cargando la batería.\n"; }
};

class Laptop : public Pantalla, public Bateria {
public:
    void encender() { cout << "Encendiendo la laptop.\n"; }
};

int main() {
    Laptop miLaptop;
    miLaptop.encender();
    miLaptop.mostrar();
    miLaptop.cargar();
    return 0;
}

