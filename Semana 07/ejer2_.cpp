#include <iostream>

using namespace std;

long long int potencia(int m, int n) {
  if (n == 0) {
    return 1;
  } else {
    return m * potencia(m, n - 1);
  }
}

int main() {
  int m, n;

  cout << "Digitela base m: ";
  cin >> m;

  cout << "Digite el exponente n: ";
  cin >> n;

  long long int resultado = potencia(m, n);

  cout << m << " elevado a la " << n << " es: " << resultado << endl;

  return 0;
}