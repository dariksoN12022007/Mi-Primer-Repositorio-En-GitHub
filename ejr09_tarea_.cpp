#include<iostream>
using namespace std;

int invertir_numeros( int num)  { 
    int numero_invertido = 0;
    while (num > 0) {
        int digito = num % 10;
        numero_invertido *= 10 + digito;
        num /= 10;
    }
return numero_invertido;
}

int main() {

int num;

cout<<"Ingrese un numero: "<<endl;
cin>>num;

int numero_invertido = invertir_numeros(num);

cout<<"El numero inverido es: "<<numero_invertido<<endl;

return 0;
}