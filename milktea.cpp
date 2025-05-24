#include "MilkTea.h"
#include <iostream>
using namespace std;

MilkTea::MilkTea(string n, double p, int q, string f, string s)
    : Product(n, p, q), flavor(f), size(s) {}

double MilkTea::totalValue() { return price * quantity; }
void MilkTea::displayInfo() {
    Product::displayInfo();
    cout << "Flavor: " << flavor << endl;
    cout << "Size: " << size << endl;
}