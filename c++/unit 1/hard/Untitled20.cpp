#include <iostream>
using namespace std;
int main() {
    double base;
    int exponent;
    double result = 1.0;
    cout << "Input the base: ";
    cin >> base;
    cout << "Input the exponent: ";
    cin >> exponent;
    if (cin.fail()) {
        cout << "Invalid input. Please enter numeric values for both the base and exponent." << endl;
        return 1;
    }
    if (exponent < 0) {
        cout << "Exponent cannot be negative in this program. Please enter a non-negative integer for the exponent." << endl;
    } else if (exponent == 0) {
        result = 1.0;
    } else {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    }
    cout << base << " raised to the power of " << exponent << " is " << result << endl;
    return 0;
}
