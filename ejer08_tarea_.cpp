#include<iostream>
using namespace std;

int suma_de_digitos( int numero) {

    int suma =0;
    while (numero>0) {
        int digito = numero % 10;
        suma += digito;
        numero /= 10;
    }
    return suma;
}

int main() {

int numero,suma = 0;

    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;

  suma = suma_de_digitos(numero);

  cout<<"La suma de los digitos de:"<<numero<<" es "<<suma<<endl;

  return 0;

}