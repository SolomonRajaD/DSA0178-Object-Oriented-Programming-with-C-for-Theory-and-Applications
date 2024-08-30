#include <iostream>
using namespace std;

class Car {
public:
    int id;
    string name;
    int marks;
    static int objectCount;

    Car(int i, string n, int m) : id(i), name(n), marks(m) {
        ++objectCount;
    }

    ~Car() {
        --objectCount;
    }

    void display() const {
        cout << "Id of the Car: " << id << endl;
        cout << "Name of the Car: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    static void displayObjectCount() {
        cout << "Number of objects created in the class: " << objectCount << endl;
    }
};

int Car::objectCount = 0;

int main() {
    Car car1(101, "Ferrari", 10);
    car1.display();

    Car car2(205, "Mercedes", 9);
    car2.display();

    Car::displayObjectCount();

    return 0;
}

