#include <iostream>
using namespace std;

inline int cuadrado(int x) {
  return x * x;
}

int main() {
  int num = 5;
  cout << "El cuadrado de " << num << " es: " << cuadrado(num) <<endl;
  return 0;
} // cambiara el valor de x -> num.