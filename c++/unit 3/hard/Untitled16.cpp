#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
public:
    Student(string n = "Unknown") : name(n) {}
    void printName() const {
        cout << name << endl;
    }
};

int main() {
    string name;
    cin >> name;
    Student s1(name);
    s1.printName();
    Student s2;
    s2.printName();
    return 0;
}

