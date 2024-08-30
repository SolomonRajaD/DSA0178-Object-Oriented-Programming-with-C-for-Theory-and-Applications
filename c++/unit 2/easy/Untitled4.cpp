#include <iostream>
using namespace std;

double calculateInterest(double principal, int years, bool isSeniorCitizen) {
    double rateOfInterest = isSeniorCitizen ? 0.12 : 0.10;
    return principal * rateOfInterest * years;
}

int main() {
    double principal;
    int years;
    char seniorCitizen;

    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Is customer senior citizen (y/n): ";
    cin >> seniorCitizen;

    bool isSenior = (seniorCitizen == 'y' || seniorCitizen == 'Y');
    double interest = calculateInterest(principal, years, isSenior);

    cout << "Interest: " << interest << endl;

    return 0;
}

