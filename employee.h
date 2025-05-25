#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    string role;

public:
    Employee(string n, int id, string r);
    void displayInfo();
};

#endif