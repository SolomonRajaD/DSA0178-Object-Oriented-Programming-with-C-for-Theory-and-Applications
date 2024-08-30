#include <iostream>
using namespace std;

int main() {
    int marks[4];
    int total = 0;
    double average, percentage;
    char grade;

    cout << "Please Enter the marks of four subjects:\n";
    for (int i = 0; i < 4; ++i) {
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 4.0;
    percentage = (total / 400.0) * 100;

    if (percentage > 75) grade = 'E';
    else if (percentage >= 60) grade = 'D';
    else if (percentage >= 50) grade = 'C';
    else if (percentage >= 40) grade = 'B';
    else grade = 'F';

    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
    cout << "Marks Percentage = " << percentage << endl;
    cout << "Grade = " << grade << endl;

    return 0;
}

