#include <iostream>
#include <string>
using namespace std;

// Base class for account details
class Account {
protected:
    string customerName;
    int accountNumber;
    float balance;
public:
    Account() : balance(0) {}

    void getAccountDetails() {
        cout << "Enter Customer Name: ";
        cin >> customerName;
        cout << "Enter Account Number: ";
        cin >> accountNumber;
    }

    void displayAccountDetails() {
        cout << "Customer Name : " << customerName << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance : " << balance << endl;
    }
};

// Derived class for Savings account
class SavingAccount : public Account {
public:
    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }
};

// Derived class for Current account
class CurrentAccount : public Account {
public:
    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        balance -= amount;
    }
};

// Main class
class Bank : public SavingAccount, public CurrentAccount {
private:
    char accountType;
public:
    void chooseAccountType() {
        cout << "Enter S for saving customer and C for current a/c customer: ";
        cin >> accountType;
        if (accountType == 'S' || accountType == 's') {
            SavingAccount::getAccountDetails();
        } else if (accountType == 'C' || accountType == 'c') {
            CurrentAccount::getAccountDetails();
        } else {
            cout << "Invalid account type!" << endl;
        }
    }

    void menu() {
        int choice;
        float amount;
        do {
            cout << "Choose Your Choice" << endl;
            cout << "1) Deposit" << endl;
            cout << "2) Withdraw" << endl;
            cout << "3) Display Balance" << endl;
            cout << "4) Display with full Details" << endl;
            cout << "5) Exit" << endl;
            cout << "Enter Your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter amount to Deposit: ";
                    cin >> amount;
                    if (accountType == 'S' || accountType == 's') {
                        SavingAccount::deposit(amount);
                    } else if (accountType == 'C' || accountType == 'c') {
                        CurrentAccount::deposit(amount);
                    }
                    break;
                case 2:
                    cout << "Enter amount to Withdraw: ";
                    cin >> amount;
                    if (accountType == 'S' || accountType == 's') {
                        SavingAccount::withdraw(amount);
                    } else if (accountType == 'C' || accountType == 'c') {
                        CurrentAccount::withdraw(amount);
                    }
                    break;
                case 3:
                    if (accountType == 'S' || accountType == 's') {
                        cout << "Balance : " << SavingAccount::balance << endl;
                    } else if (accountType == 'C' || accountType == 'c') {
                        cout << "Balance : " << CurrentAccount::balance << endl;
                    }
                    break;
                case 4:
                    if (accountType == 'S' || accountType == 's') {
                        SavingAccount::displayAccountDetails();
                    } else if (accountType == 'C' || accountType == 'c') {
                        CurrentAccount::displayAccountDetails();
                    }
                    break;
                case 5:
                    cout << "Thank You for Banking with us.." << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
            }
        } while (choice != 5);
    }
};

int main() {
    Bank bank;
    bank.chooseAccountType();
    bank.menu();
    return 0;
}

