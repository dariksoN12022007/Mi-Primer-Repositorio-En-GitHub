#include<iostream>
using namespace std;

int main (){

int ano;

cout<<"Digite un ano: "<<endl;
cin>>ano;

if( ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {

    cout<<"El ano es bisiesto"<<endl;
}
else {
    cout<<"El ano no es bisiesto: "<<endl;
}

return 0;
}