#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNumber;
    string name, address, city;
    float marks1, marks2, marks3;

public:
    void inputDetails() {
        cout << "Enter student roll number: ";
        cin >> rollNumber;
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter student address: ";
        getline(cin, address);
        cout << "Enter student city: ";
        getline(cin, city);
        cout << "Enter the marks1: ";
        cin >> marks1;
        cout << "Enter the marks2: ";
        cin >> marks2;
        cout << "Enter the marks3: ";
        cin >> marks3;
    }

    void displayDetails() {
        float totalMarks = marks1 + marks2 + marks3;
        float percentage = (totalMarks / 300) * 100;
        char grade;

        if (percentage >= 90) grade = 'A';
        else if (percentage >= 80) grade = 'B';
        else if (percentage >= 70) grade = 'C';
        else grade = 'D';

        cout << "********************" << endl;
        cout << "The student roll number: " << rollNumber << endl;
        cout << "The student name: " << name << endl;
        cout << "The student address: " << address << endl;
        cout << "The student city: " << city << endl;
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
        cout << "Marks3: " << marks3 << endl;
        cout << "Total percentage: " << percentage << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student;
    student.inputDetails();
    student.displayDetails();
    return 0;
}

