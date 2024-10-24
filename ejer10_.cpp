#include <iostream>

using namespace std;

int main() {
  int n, i = 1, suma_de_pares = 0, suma_de_impares = 0;

  cout << "Digite un numero entero: ";
  cin >> n;

  while (i <= n) {
    if (i % 2 == 0) {
      suma_de_pares += i;
    } else {
      suma_de_impares += i;
    }
    i++;
  }

  cout << "La suma de los numeros pares entre 1 y " << n << " es: " << suma_de_pares << endl;
  cout << "La suma de los numeros impares entre 1 y " << n << " es: " << suma_de_impares << endl;

  return 0;
}