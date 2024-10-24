#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n,diagonal_principal, diagonal_secundaria, suma_total;
  cout << "Ingrese el tamanio de la matriz cuadrada: ";
  cin >> n;

  vector<vector<int>> matrix(n, vector<int>(n));

  cout << "Ingrese los elementos de la matriz:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  diagonal_principal = 0;
  diagonal_secundaria = 0;

  for (int i = 0; i < n; i++) {
 diagonal_principal += matrix[i][i];
   diagonal_secundaria += matrix[i][n - i - 1];
  }

suma_total = diagonal_principal + diagonal_secundaria;

cout<<"La suma total de las diagonales es: "<<suma_total<<endl;

  return 0;
}