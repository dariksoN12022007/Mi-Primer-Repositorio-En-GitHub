#include <iostream>
using namespace std;

class Teclado {
public:
    void tocarNota() { cout << "Tocando una nota musical.\n"; }
};

class Sintetizador {
public:
    void generarSonido() { cout << "Generando sonido electrónico.\n"; }
};

class EstacionMusical : public Teclado, public Sintetizador {
public:
    void componer() { cout << "Componiendo música.\n"; }
};

int main() {
    EstacionMusical musica;
    musica.tocarNota();
    musica.generarSonido();
    musica.componer();
    return 0;
}
