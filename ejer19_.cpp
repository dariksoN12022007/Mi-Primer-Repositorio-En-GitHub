#include <iostream>

using namespace std;

int main() {
  char letra;

  cout << "Ingrese una letra: ";
  cin >> letra;

  switch (letra) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      cout << "La letra '" << letra << "' es una vocal." << endl;
      break;
    default:
      cout << "La letra '" << letra << "' es una consonante." << endl;
  }

  return 0;
}