#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;
class Product {
protected:
    string name;
    double price;
    int quantity;
public:
    Product(string n, double p, int q);
    virtual ~Product();
    virtual double totalValue();
    virtual void displayInfo();
};
#endif
