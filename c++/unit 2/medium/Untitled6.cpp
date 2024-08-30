#include <iostream>
using namespace std;

int sum(int a = 0, int b = 0, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    int a, b, c, d;
    cout << "Enter the values (up to 4 integers separated by spaces): ";
    cin >> a >> b >> c >> d;

    int result = sum(a, b, c, d);
    cout << "Sum: " << result << endl;

    return 0;
}

