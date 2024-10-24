#include<iostream>
#include<cmath>
using namespace std;


int potencia( int m, int n){
    return pow(m,n);
}
int main() 
{
    int m,n,resp;
cout<<"Ingresar n y m: ";
cin>>m>>n;
potencia( m, n);
resp = potencia( m,n);
cout<<m<<" elevado a la "<<n<<" = "<<resp;
    return 0;
}