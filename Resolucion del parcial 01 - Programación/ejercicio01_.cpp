#include <iostream>
using namespace std;

int main() {
  int n, k;

  cout << "Ingrese el tamano del array: ";
  cin >> n;

  int arr[n];

  cout << "Digite los elementos del array:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Digite el numero de rotaciones: ";
  cin >> k;

  k %= n;

  for (int i = 0; i < k; i++) {
    int temp = arr[n - 1];
    for (int j = n - 1; j > 0; j--) {
      arr[j] = arr[j - 1];
    }
    arr[0] = temp;
  }

  cout << "Array rotado:\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}