#include "Snack.h"
#include <iostream>
using namespace std;

Snack::Snack(string n, double p, int q, string t, string ed)
    : Product(n, p, q), type(t), expiryDate(ed) {}
double Snack::totalValue() { return price * quantity; }

void Snack::displayInfo() {
    Product::displayInfo();
    cout << "Type: " << type << endl;
    cout << "Expiry Date: " << expiryDate << endl;
}
