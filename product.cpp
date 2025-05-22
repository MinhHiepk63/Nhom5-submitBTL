#include "Product.h"
#include <iostream>
using namespace std;

Product::Product(string n, double p, int q) : name(n), price(p), quantity(q) {}
Product::~Product() {}
double Product::totalValue() { return price * quantity; }
void Product::displayInfo() {
    cout << "Product Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total Value: " << totalValue() << endl;
}
