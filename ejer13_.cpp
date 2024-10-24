#include <iostream>

using namespace std;

int main() {
  int a, b, potencia = 1;

  cout << "Digite la base (a): ";
  cin >> a;

  cout << "Digite  el exponente (b): ";
  cin >> b;

  for (int i = 1; i <= b; i++) {
    potencia *= a; 
  }

  cout << a << " elevado a la potencia " << b << " es: " << potencia << endl;

  return 0;
}