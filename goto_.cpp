#include <iostream>
using namespace std;

int main() {
  int i = 1;

  inicio:
    cout<< "Valor de i: " << i <<endl;
    i++;

    if (i <= 10) {
      goto inicio;
    }

  return 0;
}