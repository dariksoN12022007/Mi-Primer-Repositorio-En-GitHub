#include <iostream>
using namespace std;

extern int x;// <- archivo1.cpp

int main() {

cout<< "x = " << x <<endl;
  return 0;
}


int x = 10; // <- archivo2.cpp