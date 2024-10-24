#include <iostream>
#include <vector>

using namespace std;

void rotateRight(vector<int>& arr, int k) {
  int n = arr.size();
  k = k % n; 

  reverse(arr.begin(), arr.end());
 reverse(arr.begin(), arr.begin() + k);
  reverse(arr.begin() + k, arr.end());
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  int k = 2;

  cout << "Arreglo original: ";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  rotateRight(arr, k);

  cout << "Arreglo rotado: ";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}