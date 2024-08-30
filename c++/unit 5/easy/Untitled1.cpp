#include <iostream>
using namespace std;

class Person {
public:
    virtual void getData() = 0;
    virtual void displayData() = 0;
    virtual void bonus() = 0;
    virtual ~Person() {}
};

class Admin : public Person {
protected:
    double salary;
public:
    void getData() override {
        cout << "Enter salary: ";
        cin >> salary;
    }
    
    void displayData() override {
        cout << "Admin Salary: " << salary << endl;
    }
    
    void bonus() override {
        cout << "Admin Bonus: " << salary * 1.10 << endl;
    }
};

class Account : public Person {
protected:
    double salary;
public:
    void getData() override {
        cout << "Enter salary: ";
        cin >> salary;
    }
    
    void displayData() override {
        cout << "Account Salary: " << salary << endl;
    }
    
    void bonus() override {
        cout << "Account Bonus: " << salary * 1.10 << endl;
    }
};

class Master : public Admin, public Account {
public:
    void getData() override {
        Admin::getData();
        // or use Account::getData() if we want to override the same functionality
    }
    
    void displayData() override {
        Admin::displayData();
        // or use Account::displayData() if we want to override the same functionality
    }
    
    void bonus() override {
        Admin::bonus();
        // or use Account::bonus() if we want to override the same functionality
    }
};

int main() {
    Master master;
    master.getData();
    master.displayData();
    master.bonus();
    return 0;
}

