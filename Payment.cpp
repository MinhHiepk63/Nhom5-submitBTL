#include "Payment.h"
#include "Budget.h"
#include <iostream>
using namespace std;

Payment::Payment(int id, double amt, string method)
    : paymentID(id), amount(amt), paymentMethod(method) {}

double Payment::getAmount() const { return amount; }
int Payment::getID() const { return paymentID; }
string Payment::getMethod() const { return paymentMethod; }

void Payment::processPayment(Budget& budget) {
    cout << "Processing payment of " << amount << " using " << paymentMethod << endl;
    budget.updateBudget(0, amount);
    budget.addTransaction(*this);
}

void Payment::displayInfo() const {
    cout << "Payment ID: " << paymentID << endl;
    cout << "Amount: " << amount << endl;
    cout << "Payment Method: " << paymentMethod << endl;
}