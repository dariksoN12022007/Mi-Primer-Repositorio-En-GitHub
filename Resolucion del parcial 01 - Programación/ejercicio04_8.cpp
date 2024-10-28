#include<iostream>
using namespace std;

int main () {

int x = 1, total = 0;

while(x<=5) {
    total += x;
    x++;
}
cout<<total;

return 0;
}