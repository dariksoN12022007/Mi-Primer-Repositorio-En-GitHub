#include <complex>
#include <iostream>
using namespace std;

int main() {
  
  complex<double> z1(3.0, 4.0);
  complex<double> z2(1.0, 2.0);

  complex<double> sum = z1 + z2;   // suma
  complex<double> diff = z1 - z2;  // resta
  complex<double> prod = z1 * z2;  // multiplicación
  complex<double> quot = z1 / z2;  // división

  cout << "z1 + z2 = " << sum << endl;
  cout << "z1 - z2 = " << diff << endl;
  cout << "z1 * z2 = " << prod << endl;
  cout << "z1 / z2 = " << quot << endl;

  return 0;
}