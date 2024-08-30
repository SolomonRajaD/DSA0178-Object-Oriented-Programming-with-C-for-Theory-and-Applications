#include <iostream>
#include <stdexcept>
using namespace std;

void checkNumber(double number) {
    if (number < 0) {
        throw invalid_argument("Accept only positive integer.");
    } else if (number < 0.0001) {
        throw overflow_error("The number is too small");
    }
}

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    try {
        checkNumber(number);
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    } catch (const overflow_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}

