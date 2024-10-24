#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
  int n, m;
  cout << "Digite el numero de filas de la matriz: ";
  cin >> n;
  cout << "Digite el numero de columnas de la matriz: ";
  cin >> m;

  vector<vector<int>> matrix(n, vector<int>(m));

  cout << "Ingrese los elementos de la matriz:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matrix[i][j];
    }
  }

  int minimo_valor = numeric_limits<int>::max();
  int maximo_valor = numeric_limits<int>::min();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] < minimo_valor) {
        minimo_valor = matrix[i][j];
      }
      if (matrix[i][j] > maximo_valor) {
        maximo_valor = matrix[i][j];
      }
    }
  }

  cout << "El valor minimo en la matriz es: " << minimo_valor << endl;
    cout << "El valor maximo en la matriz es: " << maximo_valor << endl;

  return 0;
}
