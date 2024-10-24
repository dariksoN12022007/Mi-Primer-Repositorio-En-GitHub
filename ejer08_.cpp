#include <iostream>

using namespace std;

int main() {
  int numero, suma = 0, digito;

  cout << "Digite un numero entero: ";
  cin >> numero;

  while (numero != 0) {
    digito = numero % 10; 
    suma += digito; 
    numero /= 10; 
  }

  cout << "La suma de los digitos es: " << suma << endl;

  return 0;
}