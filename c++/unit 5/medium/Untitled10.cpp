#include <iostream>
using namespace std;

class InterestCalculator {
protected:
    double principal;
    double rate;
    int years;
public:
    InterestCalculator(double p, double r, int y)
        : principal(p), rate(r), years(y) {}

    double calculateSimpleInterest() const {
        return (principal * rate * years) / 100;
    }
};

int main() {
    double principal, rate;
    int years;
    
    cout << "Enter the principal Amount: ";
    cin >> principal;
    cout << "Enter the No. of years: ";
    cin >> years;
    cout << "Enter the rate of Interest (%): ";
    cin >> rate;

    InterestCalculator calc(principal, rate, years);
    double interest = calc.calculateSimpleInterest();

    cout << "Simple Interest: " << interest << endl;

    return 0;
}

