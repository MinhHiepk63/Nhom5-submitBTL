#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string n, int id, string r) : name(n), employeeID(id), role(r) {}
void Employee::displayInfo() {
    cout << "Employee Name: " << name << endl;
    cout << "Employee ID: " << employeeID << endl;
    cout << "Role: " << role << endl;
}