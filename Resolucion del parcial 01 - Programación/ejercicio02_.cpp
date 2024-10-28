#include <iostream>
using namespace std;

int main() {
  int filas, columnas;

  cout << "Digite el numero de filas de la matriz: ";
  cin >> filas;

  cout << "Digite el numero de columnas de la matriz: ";
  cin >> columnas;

  int matriz[filas][columnas];

  cout << "Digite los elementos de la matriz:\n";
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      cin >> matriz[i][j];
    }
  }

  int maximo = matriz[0][0];
  int minimo = matriz[0][0];

  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < columnas; j++) {
      if (matriz[i][j] > maximo) {
        maximo = matriz[i][j];
      }
      if (matriz[i][j] < minimo) {
        minimo = matriz[i][j];
      }
    }
  }

  cout << "El valor maximo de la matriz es: " << maximo << endl;
  cout << "El valor minimo de la matriz es: " << minimo << endl;

  return 0;
}