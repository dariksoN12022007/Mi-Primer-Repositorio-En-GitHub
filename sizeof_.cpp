//sizeof(variable_o_tipo_o_expresion)

#include <iostream>
using namespace std;

int main() {
  int num = 106;
  char caracter = 'a';
  double decimal = 5.67;

  cout << "Tamaño de int: " << sizeof(int) << " bytes" << endl; // Salida: Tamaño de int: 4 bytes
  cout << "Tamaño de char: " << sizeof(char) << " bytes" << endl; // Salida: Tamaño de char: 1 bytes
  cout << "Tamaño de double: " << sizeof(double) << " bytes" << endl; // Salida: Tamaño de double: 8 bytes
  cout << "Tamaño de num: " << sizeof(num) << " bytes" << endl; // Salida: Tamaño de num: 4 bytes
  cout << "Tamaño de 'A': " << sizeof('A') << " bytes" << endl; // Salida: Tamaño de 'a': 1 bytes

  return 0;
}

