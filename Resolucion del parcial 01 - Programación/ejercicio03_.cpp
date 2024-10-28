#include <iostream>

using namespace std;

int main() {
  int n, numero, positivos = 0, negativos = 0, ceros = 0;

  cout << "Ingrese la cantidad de numeros: ";
  cin >> n;

  int i = 1; 
  do {
    cout << "Ingrese el numero: " << i << ": ";
    cin >> numero;

    if (numero > 0) {
      positivos++;
    } else if (numero < 0) {
      negativos++;
    } else {
      ceros++;
    }

    i++;
  } while (i <= n);

  cout << "Cantidad de numeros positivos: " << positivos << endl;
  cout << "Cantidad de numeros negativos: " << negativos << endl;
  cout << "Cantidad de ceros: " << ceros << endl;

  return 0;
}