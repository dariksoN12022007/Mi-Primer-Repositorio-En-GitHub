#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> eliminar_dulicados(vector<int> arr) {
  sort(arr.begin(), arr.end()); 
  arr.erase(unique(arr.begin(), arr.end()), arr.end()); 
  return arr;
}

int main() {
  vector<int> arr = {1,2,3,4,3,2,6,7,4,3,7,8,2};

  cout << "Arreglo original: ";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  vector<int> arrSinDuplicados = eliminar_dulicados(arr);

  cout << "Arreglo sin duplicados: ";
  for (int i = 0; i < arrSinDuplicados.size(); i++) {
    cout << arrSinDuplicados[i] << " ";
  }
  cout << endl;

  return 0;
}