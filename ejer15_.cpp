#include<iostream>
using namespace std;

int main ()   {

  int nota;

  cout<<"Digite la nota: "<<endl;
  cin>>nota;

  if( nota <= 100 && nota >=90) {

    cout<<"La "<<nota<<" da una calificacion de: A"<<endl;
  } 
  else if ( nota < 90 && nota >= 80 ) {
    cout<<"La "<<nota<<" da una calificacion de: B"<<endl;
  }
   else if (nota < 80 && nota >=70){
    cout<<"La "<<nota<<" da una calificacion de: C"<<endl;
   }
   else if ( nota < 70 && nota >= 60){
    cout<<"La "<<nota<<" da una calificacio de: D"<<endl;
   }
   else if ( nota < 60){
    cout<<"La "<<nota<<" da una calificacion de: F"<<endl;
   }

 return 0;
}