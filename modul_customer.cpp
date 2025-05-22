#include <iostream>
#include <string>
using namespace std;

class Customer {
protected:
    int CustomerID ;
    string CustomerName ;
    string ContactInfo ;

public:
    Customer(string n, int id, string ci) 
    : CustomerName(n), CustomerID(id), ContactInfo(ci) {}
    virtual ~Customer() {}
	virtual void displayInfo() {
    cout << "Customer Name: " << CustomerName << endl;
    cout << "Customer ID: " << CustomerID << endl;
    cout << "Contact Info: " << ContactInfo << endl;
	}
};
int main() {
	//khach hang 
     Customer cust("Jane Smith", 202, "555-1234");
    cust.displayInfo();
    return 0;
}


