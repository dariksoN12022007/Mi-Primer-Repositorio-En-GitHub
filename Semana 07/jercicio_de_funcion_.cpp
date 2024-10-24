#include<iostream>
using namespace std;

void saludar(int n) {
    for( int i =0; i<= n; i++){
    cout<<"Buenos dias\n";
}
}

int main () 
{ int n;
cout<<"Digitar el numero de saludos:"<<endl;
cin>>n;

    saludar(n);
    return 0;
}