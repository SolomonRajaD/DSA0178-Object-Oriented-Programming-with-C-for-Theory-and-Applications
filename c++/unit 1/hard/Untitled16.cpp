#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of N: ";
    cin >> n;
    if (cin.fail() || n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
    } else if (n == 1) {
        cout << "The 1st Fibonacci number is 0." << endl;
    } else if (n == 2) {
        cout << "The 2nd Fibonacci number is 1." << endl;
    } else {
        int a = 0, b = 1, fib;
        for (int i = 3; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
        cout << "The " << n << "th Fibonacci number is " << fib << "." << endl;
    }

    return 0;
}

