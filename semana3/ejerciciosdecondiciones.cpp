#include<iostream>
using namespace std;

int main ()    {

           int nota;

        cout<<" digite las nota: "<<endl;
        cin>>nota;


           string condicion = ( nota>= 10.5)? "aprobado" : "desaprobado";
           cout<<"El estudiante tiene un estado: \t"<<condicion;

return 0;
}