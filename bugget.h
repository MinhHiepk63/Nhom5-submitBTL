#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Module Ngân Quỹ
class Budget {
private:
    double totalAmount;
    double expenses;
    double income;
    vector<Payment> history; // lưu lịch sử giao dịch

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

// Định nghĩa các hàm của Budget liên quan đến lịch sử
void Budget::addTransaction(const Payment& payment) {
    history.push_back(payment);
}

void Budget::displayHistory() {
    cout << "\n=== Payment History ===\n";
    for (const auto& payment : history) {
        payment.displayInfo();
        cout << "-------------------\n";
    }
}

