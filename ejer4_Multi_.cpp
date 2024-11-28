#include <iostream>
using namespace std;

class Guerrero {
public:
    void atacar() { cout << "Atacando con espada.\n"; }
};

class Hechicero {
public:
    void lanzarHechizo() { cout << "Lanzando un hechizo mágico.\n"; }
};

class Paladin : public Guerrero, public Hechicero {
public:
    void defender() { cout << "Defendiendo con escudo.\n"; }
};

int main() {
    Paladin personaje;
    personaje.atacar();
    personaje.lanzarHechizo();
    personaje.defender();
    return 0;
}
