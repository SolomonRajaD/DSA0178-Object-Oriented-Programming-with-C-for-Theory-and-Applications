#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float basicSalary, hra, da;
public:
    void inputDetails() {
        cout << "Enter the employee name: ";
        cin >> name;
        cout << "Enter the employee id: ";
        cin >> id;
        cout << "Enter the basic salary: ";
        cin >> basicSalary;
        cout << "Enter the hra: ";
        cin >> hra;
        cout << "Enter the da: ";
        cin >> da;
    }

    float calculateGP() {
        return basicSalary + hra + da;
    }

    float calculateNP() {
        return calculateGP() - 500; // Assuming a fixed deduction for simplicity
    }

    void displayDetails() {
        float gp = calculateGP();
        float np = calculateNP();
        cout << setw(10) << name << setw(10) << id << setw(10) << basicSalary 
             << setw(10) << hra << setw(10) << da << setw(10) << gp 
             << setw(10) << np << endl;
    }
};

int main() {
    int numEmployees;
    cout << "****************" << endl;
    cout << "Employee details" << endl;
    cout << "****************" << endl;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    Employee* employees = new Employee[numEmployees];
    
    for (int i = 0; i < numEmployees; ++i) {
        employees[i].inputDetails();
    }

    cout << setw(10) << "NAME" << setw(10) << "ID" << setw(10) << "BASIC" 
         << setw(10) << "HRA" << setw(10) << "DA" << setw(10) << "GP" 
         << setw(10) << "NP" << endl;

    for (int i = 0; i < numEmployees; ++i) {
        employees[i].displayDetails();
    }

    delete[] employees;
    return 0;
}

