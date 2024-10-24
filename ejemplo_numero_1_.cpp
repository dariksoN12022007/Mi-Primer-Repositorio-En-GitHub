#include<iostream>
#include<math.h>
using namespace std;

int main () {

double x = 0, y = 0,fg = 0, z, p;

cout<<" Bienvenido a programa que resuleve ecuaciones de 2 lineas"<<endl;
cout<<" x + y = z"<<endl;
cout<<" x - y = p"<<endl;
cout<<" Digite la z:"<<endl;
cin>>z;
cout<<" Digite la p:"<<endl;
cin>>p;

x = ( z + p) / 2;
y = z - x;

cout<<" El valor de x es: "<<x<<endl;
cout<<" El valord de y es: "<<y<<endl;
return 0;
}