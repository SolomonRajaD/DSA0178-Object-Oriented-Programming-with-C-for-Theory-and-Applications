#include <iostream>
using namespace std;

class Employee {
protected:
    int empID;
    string empName;
    float basicSalary;

public:
    void inputEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, empName);
        cout << "Enter basic salary of Employee: ";
        cin >> basicSalary;
    }
};

class Salary : public Employee {
protected:
    float hra, da;

public:
    Salary() : hra(0.2 * basicSalary), da(0.1 * basicSalary) {}

    float calculateGrossSalary() {
        return basicSalary + hra + da;
    }

    float calculateNetSalary() {
        return calculateGrossSalary() - 500; // Assuming a fixed deduction
    }
};

int main() {
    Salary employee;
    employee.inputEmployeeDetails();
    float grossSalary = employee.calculateGrossSalary();
    float netSalary = employee.calculateNetSalary();

    cout << "Gross Salary = Rs." << grossSalary << endl;
    cout << "Net Salary = Rs." << netSalary << endl;

    return 0;
}

