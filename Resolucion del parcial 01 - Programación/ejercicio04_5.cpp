#include<iostream>
using namespace std;

int main () {

int num = 5;

for( int i=0 ; i<num; i++){
    if( i==3) break;
    cout<<i<<" ";
}
return 0;
}