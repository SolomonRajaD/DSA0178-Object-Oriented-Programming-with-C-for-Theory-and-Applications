#include <iostream>
using namespace std;

int main() {
    float numbers[4];
    float* ptr = numbers;

    cout << "Enter the 4 numbers:" << endl;
    for (int i = 0; i < 4; ++i) {
        cin >> *(ptr + i);
    }

    cout << "Displaying the data:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << *(ptr + i) << endl;
    }

    return 0;
}

