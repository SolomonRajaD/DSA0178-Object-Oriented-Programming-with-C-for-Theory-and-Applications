#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, i = 1;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (cin.fail() || number <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
    } else {
        while (i < number) {
            if (number % i == 0) {
                sum += i;
            }
            i++;
        }
        if (sum == number) {
            cout << number << " is a perfect number." << endl;
        } else {
            cout << number << " is not a perfect number." << endl;
        }
    }

    return 0;
}

