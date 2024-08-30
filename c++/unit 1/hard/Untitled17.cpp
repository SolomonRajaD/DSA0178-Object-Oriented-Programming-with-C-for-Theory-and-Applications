#include <iostream>
using namespace std;

int main() {
    int number, bitPosition;
    cout << "Enter Number: ";
    cin >> number;
    cout << "Enter bit number you wish to set: ";
    cin >> bitPosition;
    if (cin.fail() || number < 0 || bitPosition < 0) {
        cout << "Invalid input. Please enter non-negative integers for both the number and bit position." << endl;
    } else {
        int result = number | (1 << bitPosition);
        cout << "Bit set Successfully" << endl;
        cout << "Answer: " << result << endl;
    }

    return 0;
}

