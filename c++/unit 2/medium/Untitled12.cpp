#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
public:
    string name;
    string address;
    int id;
    string email;
    string mobile;
};

class Programmer : public Employee {
public:
    double basicPay;

    void generatePaySlip() {
        double DA = basicPay * 0.97;
        double HRA = basicPay * 0.10;
        double PF = basicPay * 0.12;
        double clubFund = basicPay * 0.001;
        double grossPay = basicPay + DA + HRA;
        double netPay = grossPay - PF - clubFund;

        cout << fixed << setprecision(2);
        cout << "=======================\n";
        cout << "PROGRAMMER PAYMENT SLIP\n";
        cout << "=======================\n";
        cout << "BASIC PAY => " << basicPay << endl;
        cout << "DEARNESS ALLOWANCE => " << DA << endl;
        cout << "HOUSE RENT ALLOWANCE => " << HRA << endl;
        cout << "PROVIDENT FUND => " << PF << endl;
        cout << "CLUB FUND => " << clubFund << endl;
        cout << "GROSS PAY => " << grossPay << endl;
        cout << "NET PAY => " << netPay << endl;
    }
};

int main() {
    Programmer p;
    cout << "Enter Name of the Employee: ";
    getline(cin, p.name);
    cout << "Enter Address of the Employee: ";
    getline(cin, p.address);
    cout << "Enter ID of the Employee: ";
    cin >> p.id;
    cin.ignore(); 
    cout << "Enter Mobile Number: ";
    getline(cin, p.mobile);
    cout << "Enter E-Mail ID of the Employee: ";
    getline(cin, p.email);
    cout << "ENTER THE BASIC PAY OF THE PROGRAMMER => ";
    cin >> p.basicPay;

    p.generatePaySlip();

    return 0;
}

