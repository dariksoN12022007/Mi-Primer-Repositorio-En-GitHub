#include <iostream>
#include <vector>

using namespace std;

void moverCerosAlFinal(vector<int>& arr) {
  int n = arr.size();
  int count = 0; 

  for (int i = 0; i < n; i++) {

    if (arr[i] != 0) {
  swap(arr[i], arr[count]);
    count++;
    }
  }
}

int main() {
  vector<int> arr = {1,0,0,4,5,0,6,7,0,3};

  cout << "Arreglo original: ";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  moverCerosAlFinal(arr);

  cout << "Arreglo con ceros al final: ";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}