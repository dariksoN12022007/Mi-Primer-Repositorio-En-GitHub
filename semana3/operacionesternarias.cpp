#include<iostream>
using namespace std;

int main ()    {
         
        float monto, total=0 , descuento= 0;
          
        cout<<" digite el monto: "<<endl;
        cin>>monto;

         int condicion = (monto > 100)? descuento  = monto * 0.1 : descuento  = monto + 0;
         
         total = monto - descuento;


         cout<<"El monto total es:"<<total<<" soles "<<endl;
         cout<<"El descuento fue: "<<descuento<<" soles "<<endl;
   

    return 0;
} 