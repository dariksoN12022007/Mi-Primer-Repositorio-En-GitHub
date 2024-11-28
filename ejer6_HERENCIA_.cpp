#include <iostream>
using namespace std;

class Empleado {
public:
    string nombre;
    int edad;
    float salario;

    Empleado(string n, int e, float s) : nombre(n), edad(e), salario(s) {}
    void mostrarDatos() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << ", Salario: " << salario << endl;
    }
};

class Gerente : public Empleado {
public:
    Gerente(string n, int e, float s) : Empleado(n, e, s) {}
    void dirigir() { cout << nombre << " está dirigiendo el equipo.\n"; }
};

int main() {
    Gerente gerente("Ana", 35, 75000);
    gerente.mostrarDatos();
    gerente.dirigir();
    return 0;
}
