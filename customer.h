#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    int CustomerID;
    string CustomerName;
    string ContactInfo;

public:
    Customer(string n, int id, string ci);
    virtual ~Customer();
    virtual void displayInfo();
};

#endif

