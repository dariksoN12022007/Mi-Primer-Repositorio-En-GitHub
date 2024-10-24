#include <iostream>

using namespace std;

int main() {
  int filasA, columnasA, filasB, columnasB;


  cout << "Ingrese el número de filas de la matriz A: ";
  cin >> filasA;
  cout << "Ingrese el número de columnas de la matriz A: ";
  cin >> columnasA;


  cout << "Ingrese el número de filas de la matriz B: ";
  cin >> filasB;
  cout << "Ingrese el número de columnas de la matriz B: ";
  cin >> columnasB;

  if (columnasA != filasB) {
    cout << "Las matrices no se pueden multiplicar." << endl;
    return 1;
  }

 
  int A[filasA][columnasA];
  int B[filasB][columnasB];


  cout << "Ingrese los elementos de la matriz A:" << endl;
  for (int i = 0; i < filasA; i++) {
    for (int j = 0; j < columnasA; j++) {
      cin >> A[i][j];
    }
  }

   cout << "Ingrese los elementos de la matriz B:" << endl;
  for (int i = 0; i < filasB; i++) {
    for (int j = 0; j < columnasB; j++) {
      cin >> B[i][j];
    }
  }

  int C[filasA][columnasB];

  for (int i = 0; i < filasA; i++) {
    for (int j = 0; j < columnasB; j++) {
      C[i][j] = 0;
      for (int k = 0; k < columnasA; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  cout << "La matriz resultante C es:" << endl;
  for (int i = 0; i < filasA; i++) {
    for (int j = 0; j < columnasB; j++) {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}