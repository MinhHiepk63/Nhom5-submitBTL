#ifndef SNACK_H
#define SNACK_H
#include "Product.h"
class Snack : public Product {
private:
    string type;
    string expiryDate;

public:
    Snack(string n, double p, int q, string t, string ed);
    double totalValue() override;
    void displayInfo() override;
};

#endif