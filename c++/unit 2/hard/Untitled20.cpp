#include <iostream>
using namespace std;

double calculateTax(double income) {
    if (income <= 60000) {
        return 0;
    } else if (income <= 150000) {
        return income * 0.05;
    } else if (income <= 500000) {
        return income * 0.10;
    } else {
        return income * 0.15;
    }
}

int main() {
    double income;
    cout << "Enter your Income: ";
    cin >> income;

    double tax = calculateTax(income);

    cout << "Your income tax is: " << tax << endl;

    return 0;
}

