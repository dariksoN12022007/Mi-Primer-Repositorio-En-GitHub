#include <iostream>

using namespace std;

int main() {
  int numero, numero_invertido = 0, digito;

  cout << "Digite un numero entero: ";
  cin >> numero;

  while (numero != 0) {
    digito = numero % 10;
    numero_invertido = numero_invertido * 10 + digito; 
    numero /= 10; 
  }

  cout << "El numero invertido es: " << numero_invertido << endl;

  return 0;
}