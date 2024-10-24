#include<iostream>
using namespace std;

int main () {

int opcion;

do {
cout<<"######BIENVENIDO#######";
cout<<"Eliga una opcion: "<<endl;
cout<<"1. Hola"<<endl;
cout<<"2. Adios"<<endl;
cout<<"3. salir"<<endl;
cout<<"Digite una opcion: "<<endl;
cin>>opcion;

switch(opcion) {

case 1: 
cout<<"Hola"<<endl;
break;

case 2: 
cout<<"Adios"<<endl;
break;

case 3: 
cout<<"Fin del programa"<<endl;
break;
default:

cout<<"Opcion incorrecta. Por favor ingrese una opcion valida:"<<endl;
 }

} while ( opcion != 3);

return 0;
}