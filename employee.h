
#include <iostream>
#include <string>
using namespace std;
// Module Nhân Viên
class Employee {
private:
    string name;
    int employeeID;
    string role;

public:
    Employee(string n, int id, string r) : name(n), employeeID(id), role(r) {}
    ~Employee() {}
    void displayInfo() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Role: " << role << endl;
    }
};
int main(){
    // Tạo nhân viên
    Employee emp("John Doe", 101, "Cashier");
    emp.displayInfo();
}