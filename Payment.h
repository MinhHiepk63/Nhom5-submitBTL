#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
using namespace std;

class Budget;

class Payment {
private:
    int paymentID;
    double amount;
    string paymentMethod;

public:
    Payment(int id, double amt, string method);
    double getAmount() const;
    int getID() const;
    string getMethod() const;
    void processPayment(Budget& budget);
    void displayInfo() const;
    friend class Budget;
};

#endif