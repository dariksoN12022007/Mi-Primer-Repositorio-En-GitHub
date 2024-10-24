#include<iostream>
using namespace std;

int main()  {

int precio = 0;
float descuento = 0 ;
char opcion;

cout<<"Digite el valor de producto: "<<endl,
cin>>precio;
cout<<"Digite el descuento a aplicar: "<<endl;
cout<<" A. descuento del 10%"<<endl;
cout<<" B. descuento del 20%"<<endl;
cout<<" C. descuento del 30%"<<endl;
cin>>opcion;

switch(opcion){

case 'a': 
descuento = precio - precio * 1/10;
cout<<"El precion con descuento es: "<<descuento<<endl;
break;

case 'b':
descuento = precio - precio * 1/5;
cout<<"El precio con el descuento total es: "<<descuento<<endl;
break;

case 'c':
descuento = precio - precio * 3/10;
cout<<"El precio con el descuento total es: "<<descuento<<endl;
break;

default:

cout<<"Opcion de descuento no valida. Digite una valida: "<<endl;
}

return 0;
} 