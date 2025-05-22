#include <iostream>
#include <string>
#include <vector>
using namespace std;
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
class Snack : public Product {
private:
    string type;
    string expiryDate;
public:
    Snack(string n, double p, int q, string t, string ed)
        : Product(n, p, q), type(t), expiryDate(ed) {}
    double totalValue() override {
        return price * quantity;
    }
    void displayInfo() override {
        Product::displayInfo();
        cout << "Type: " << type << endl;
        cout << "Expiry Date: " << expiryDate << endl;
    }
};
class MilkTea : public Product {
private:
    string flavor;
    string size;
public:
    MilkTea(string n, double p, int q, string f, string s)
        : Product(n, p, q), flavor(f), size(s) {}
    double totalValue() override {
        return price * quantity;
    }
    void displayInfo() override {
        Product::displayInfo();
        cout << "Flavor: " << flavor << endl;
        cout << "Size: " << size << endl;
    }
};
class Employee {
private:
    string name;
    int employeeID;
    string role;
public:
    Employee(string n, int id, string r) : name(n), employeeID(id), role(r) {}
    void displayInfo() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Role: " << role << endl;
    }
};
class Customer {
private:
    string name;
    int customerID;
    string contactInfo;
public:
    Customer(string n, int id, string ci) : name(n), customerID(id), contactInfo(ci) {}
    void displayInfo() {
        cout << "Customer Name: " << name << endl;
        cout << "Customer ID: " << customerID << endl;
        cout << "Contact Info: " << contactInfo << endl;
    }
};
class Payment;
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
class Payment {
private:
    int paymentID;
    double amount;
    string paymentMethod;
public:
    Payment(int id, double amt, string method) 
        : paymentID(id), amount(amt), paymentMethod(method) {}

    double getAmount() const { return amount; }
    int getID() const { return paymentID; }
    string getMethod() const { return paymentMethod; }
    void processPayment(Budget& budget) {
        cout << "Processing payment of " << amount << " using " << paymentMethod << endl;
        budget.updateBudget(0, amount);       
        budget.addTransaction(*this);        
    }
    void displayInfo() const {
        cout << "Payment ID: " << paymentID << endl;
        cout << "Amount: " << amount << endl;
        cout << "Payment Method: " << paymentMethod << endl;
    }
    friend class Budget; 
};
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
int main() {
    Snack snack("Chips", 20.0, 10, "Potato", "2023-12-31");
    MilkTea milkTea("Milk Tea", 30.0, 15, "Brown Sugar", "Medium");
    Employee emp("Huu Phuoc", 101, "Cashier");
    Customer cust("Minh Hiep", 202, "113");
    Budget budget(1000.0);
    Payment payment1(1, 200.0, "Credit Card");
    Payment payment2(2, 300.0, "Cash");
    snack.displayInfo();
    milkTea.displayInfo();
    emp.displayInfo();
    cust.displayInfo();
    budget.displayInfo();
    payment1.processPayment(budget);
    payment2.processPayment(budget);
    cout << "\n--- After Payment ---\n";
    budget.displayInfo();
    budget.displayHistory();
    return 0;
}
