#ifndef MILKTEA_H
#define MILKTEA_H

#include "Product.h"

class MilkTea : public Product {
private:
    string flavor;
    string size;

public:
    MilkTea(string n, double p, int q, string f, string s);
    double totalValue() override;
    void displayInfo() override;
};

#endif