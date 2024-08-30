#include <iostream>
#include <string>

using namespace std;

class BasicInfo {
protected:
    string name;
    int age;
    char gender;

public:
    void getBasicInfo() {
        cout << "Enter student's basic information: " << endl;
        cout << "Name?: ";
        cin >> name;
        cout << "Age?: ";
        cin >> age;
        cout << "Gender?: ";
        cin >> gender;
    }
    
    void printBasicInfo() {
        cout << "Name: " << name << ",Age: " << age << ",Gender: " << gender << endl;
    }
};

class ResultInfo : public BasicInfo {
protected:
    int totalMarks;
    char grade;

public:
    void getResultInfo() {
        cout << "Enter student's result information: " << endl;
        cout << "Total Marks?: ";
        cin >> totalMarks;
        cout << "Grade?: ";
        cin >> grade;
    }
    
    void printResultInfo() {
        double percentage = (static_cast<double>(totalMarks) / 500) * 100;
        cout << "Total Marks: " << totalMarks << ",Percentage: " << percentage << ",Grade: " << grade << endl;
    }
};

int main() {
    ResultInfo student;
    student.getBasicInfo();
    student.getResultInfo();
    student.printBasicInfo();
    student.printResultInfo();
    return 0;
}

