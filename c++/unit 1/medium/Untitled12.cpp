#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 0;

    cout << "Enter the value of n: ";
    cin >> n;
    if (cin.fail() || n <= 0) {
        cout << "Invalid input for n. Please enter a positive integer." << endl;
    } else {
        cout << "Enter the numbers: ";
        while (i < n) {
            int num;
            cin >> num;
            sum += num;
            i++;
        }
        cout << "Sum: " << sum << endl;
    }

    return 0;
}

