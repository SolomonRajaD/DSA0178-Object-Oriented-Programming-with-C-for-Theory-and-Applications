#include <iostream>
using namespace std;

class Student {
private:
    int marks[4];
public:
    void getMarks() {
        cout << "Enter the marks in Python: ";
        cin >> marks[0];
        cout << "Enter the marks in C Programming: ";
        cin >> marks[1];
        cout << "Enter the marks in Mathematics: ";
        cin >> marks[2];
        cout << "Enter the marks in Physics: ";
        cin >> marks[3];
    }

    void displayResult() {
        int total = 0;
        for (int i = 0; i < 4; i++) {
            total += marks[i];
        }

        double aggregate = total / 4.0;

        try {
            if (aggregate < 50) {
                throw "fail";
            } else {
                cout << "Pass" << endl;
            }
        } catch (const char* msg) {
            cout << msg << endl;
        }
    }
};

int main() {
    Student student;
    student.getMarks();
    student.displayResult();

    return 0;
}

