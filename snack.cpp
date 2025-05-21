#include <iostream>
#include <string>
using namespace std;

// Module Sản Phẩm
class Product {
protected:
    string name;
    double price;
    int quantity;

public:
    Product(string n, double p, int q) : name(n), price(p), quantity(q) {}
    virtual ~Product() {}
    virtual double totalValue() {
        return price * quantity;
    }
    virtual void displayInfo() {
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << totalValue() << endl;
    }
};