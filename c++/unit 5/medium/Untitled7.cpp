#include <iostream>
using namespace std;

class Person {
public:
    virtual void getData() = 0;
    virtual void displayData() const = 0;
    virtual void calculateBonus() const = 0;
    virtual ~Person() {}
};

class Admin : public Person {
protected:
    double salary;
public:
    void getData() override {
        cout << "Enter the salary: ";
        cin >> salary;
    }

    void displayData() const override {
        cout << "Admin Salary: " << salary << endl;
    }

    void calculateBonus() const override {
        cout << "Bonus = " << salary * 1.02 << endl;
    }
};

class Account : public Person {
protected:
    double salary;
public:
    void getData() override {
        cout << "Enter the salary: ";
        cin >> salary;
    }

    void displayData() const override {
        cout << "Account Salary: " << salary << endl;
    }

    void calculateBonus() const override {
        cout << "Bonus = " << salary * 1.02 << endl;
    }
};

int main() {
    Person* person;
    Admin admin;
    Account account;

    int choice;
    cout << "Enter 1 for Admin or 2 for Account: ";
    cin >> choice;

    if (choice == 1) {
        person = &admin;
    } else {
        person = &account;
    }

    person->getData();
    person->displayData();
    person->calculateBonus();

    return 0;
}
n
