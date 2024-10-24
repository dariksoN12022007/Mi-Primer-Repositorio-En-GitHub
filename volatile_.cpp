#include <iostream>
using namespace std;

volatile int contador = 0; // Variable volátil

int main() {
  // ... código que puede modificar el valor de contador ...
  // Por ejemplo, una interrupción o un hilo diferente

  cout << "Contador: " << contador << endl;

  return 0;
}