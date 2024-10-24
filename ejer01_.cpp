#include <iostream>
#include <vector>

using namespace std;

void rotateRight(vector<int>& arr, int k) {
  int n = arr.size();
  k = k % n; 

 for (int i = 0; i < k; i++) {
    int temp = arr[n - 1]; 
    for (int j = n - 1; j > 0; j--) {
      arr[j] = arr[j - 1];
    }
    arr[0] = temp; 
  }
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  int k = 3;

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