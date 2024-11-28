#include <iostream>
using namespace std;

class Electrodomestico {
public:
    string marca;
    Electrodomestico(string m) : marca(m) {}
};

class Refrigerador : public Electrodomestico {
public:
    Refrigerador(string m) : Electrodomestico(m) {}
    void enfriar() { cout << "El refrigerador " << marca << " está enfriando.\n"; }
};

int main() {
    Refrigerador miRefri("LG");
    miRefri.enfriar();
    return 0;
}
