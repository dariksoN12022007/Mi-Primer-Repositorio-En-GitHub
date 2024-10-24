    #include <iostream>
using namespace std;

     int main() {
         static int contador = 0; // Variable estática

         contador++;
         cout << "Contador: " << contador <<endl;

         return 0;
     }