#include <iostream>
using namespace std;

void getPerson(int& age) {
    cout << "Enter your age: ";
    cin >> age;
}

int main() {
    int age;
    getPerson(age);

    if (age >= 18) {
        cout << "You are allowed to vote" << endl;
    } else if (age < 0) {
        cout << "Invalid age entered" << endl;
    } else {
        cout << "You are allowed to vote after " << (18 - age) << " years" << endl;
    }

    return 0;
}

