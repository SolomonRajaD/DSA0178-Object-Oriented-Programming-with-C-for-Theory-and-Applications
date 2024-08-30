#include <iostream>
using namespace std;

void divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Divide by zero.");
    }
    cout << "Result: " << a / b << endl;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        divide(num1, num2);
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}

