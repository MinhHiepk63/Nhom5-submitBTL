#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Budget {
private:
    double totalAmount;
    double expenses;
    double income;
    vector<Payment> history;

public:
    Budget(double amount) : totalAmount(amount), expenses(0), income(0) {}
    
    void updateBudget(double expense, double inc) {
        expenses += expense;
        income += inc;
        totalAmount += (inc - expense);
    }

    void addTransaction(const Payment& payment);

    void displayInfo() {
        cout << "Total Amount: " << totalAmount << endl;
        cout << "Total Expenses: " << expenses << endl;
        cout << "Total Income: " << income << endl;
    }

    void displayHistory();
};


