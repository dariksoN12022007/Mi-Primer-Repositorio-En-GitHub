#include <iostream>
#include <cmath>
using namespace std;

class Figura {
public:
    virtual double calcularArea() = 0; // Método virtual puro
};

class Circulo : public Figura {
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double calcularArea() override { return M_PI * radio * radio; }
};

class Cuadrado : public Figura {
    double lado;
public:
    Cuadrado(double l) : lado(l) {}
    double calcularArea() override { return lado * lado; }
};

int main() {
    Circulo c(5.0);
    Cuadrado q(4.0);

    cout << "Área del círculo: " << c.calcularArea() << endl;
    cout << "Área del cuadrado: " << q.calcularArea() << endl;

    return 0;
}
