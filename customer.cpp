#include "customer.h"
#include <iostream>

Customer::Customer(string n, int id, string ci) 
    : name(n), customerID(id), contactInfo(ci) {}

Customer::~Customer() {}

void Customer::displayInfo() {
    cout << "Customer Name: " << name << endl;
    cout << "Customer ID: " << customerID << endl;
    cout << "Contact Info: " << contactInfo << endl;
}

void Customer::placeOrder() {
    cout << name << " is placing an order." << endl;
}
