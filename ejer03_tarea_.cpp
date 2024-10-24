#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cout << "Digite el numero de filas de la matriz: "<<endl;
  cin >> n;
  cout << "Digite el numero de columnas de la matriz: "<<endl;;
  cin >> m;

  vector<vector<int>> matrix(n, vector<int>(m));

  cout << "Ingrese los elementos de la matriz:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matrix[i][j];
    }
  }

  cout<<"La matrix original es: "<<endl;
  for( int i =0; i<n; i++){
    for(int j =0; j<m; j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }

  vector<vector<int>> transpuesta(m, vector<int>(n));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      transpuesta[j][i] = matrix[i][j];
    }
  }

  cout << "La matriz transpuesta es:" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << transpuesta[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}