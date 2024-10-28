#include<iostream>
using namespace std;

int main () {

int x=5, y=6;

int result= x++ + ++y - ++x + y++;

cout<<"x:"<<x<<" y: "<<y<<",reuslt: "<<result;

return 0;
}