#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int* ptr = arr;

    cout << "Displaying address using arrays: " << endl;
    cout << "&arr[0] = " << &arr[0] << endl;
    cout << "&arr[1] = " << &arr[1] << endl;
    cout << "&arr[2] = " << &arr[2] << endl;

    cout << "Displaying address using pointers: " << endl;
    cout << "ptr + 0 = " << (ptr + 0) << endl;
    cout << "ptr + 1 = " << (ptr + 1) << endl;
    cout << "ptr + 2 = " << (ptr + 2) << endl;

    return 0;
}

