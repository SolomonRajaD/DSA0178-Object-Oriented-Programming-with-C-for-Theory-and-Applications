#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    string emp_id;
    double basic_salary;
public:
    Employee(const string& n, const string& id, double salary)
        : name(n), emp_id(id), basic_salary(salary) {}

    virtual double calculateGrossSalary() const = 0;
    virtual double calculateDeduction() const = 0;
    virtual double calculateNetSalary() const = 0;

    void displaySalary() const {
        cout << "Gross salary: " << calculateGrossSalary() << endl;
        cout << "Ded: " << calculateDeduction() << endl;
        cout << "Net salary = " << calculateNetSalary() << endl;
    }
};

class SalaryDetails : public Employee {
public:
    SalaryDetails(const string& n, const string& id, double salary)
        : Employee(n, id, salary) {}

    double calculateGrossSalary() const override {
        return basic_salary * 1.70; // Example calculation
    }

    double calculateDeduction() const override {
        return basic_salary * 0.50; // Example deduction
    }

    double calculateNetSalary() const override {
        return calculateGrossSalary() - calculateDeduction();
    }
};

int main() {
    string name, emp_id;
    double salary;
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter Employee id: ";
    getline(cin, emp_id);
    cout << "Enter Employee Salary: ";
    cin >> salary;

    SalaryDetails emp(name, emp_id, salary);
    emp.displaySalary();

    return 0;
}

