#include <iostream>
using namespace std;

union Numero {
  int entero;
  float decimal;
};

int main() {
  Numero numero;

  // Almacenar un entero
  numero.entero = 10;
  cout << "Entero: " << numero.entero << endl; // Salida: Entero: 10

  // Almacenar un decimal
  numero.decimal = 3.14;
  cout << "Decimal: " << numero.decimal << endl; // Salida: Decimal: 3.14

  return 0;
}