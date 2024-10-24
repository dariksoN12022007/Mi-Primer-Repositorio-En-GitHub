#include <iostream>

using namespace std;

int main() {
  int numero, centena, decena, unidad;

  cout << "Digite un numero de tres digitos: ";
  cin >> numero;

  centena = numero / 100;
  decena = (numero % 100) / 10;
  unidad = numero % 10;

  if (centena == decena && decena == unidad) {
    cout << "Todos los digitos son iguales." << endl;
  } else if (centena == decena || centena == unidad || decena == unidad) {
    cout << "Dos digitos son iguales." << endl;
  } else {
    cout << "Todos los digitos son diferentes." << endl;
  }

  return 0;
}