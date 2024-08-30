#include <iostream>
using namespace std;

class Rectangle {
    double length, breadth;
public:
    Rectangle() : length(0), breadth(0) {}
    Rectangle(double l, double b) : length(l), breadth(b) {}
    Rectangle(double side) : length(side), breadth(side) {}

    void printArea() const {
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1;
    r1.printArea();

    double l, b;
    char comma; 
    cin >> l >> comma >> b;
    Rectangle r2(l, b);
    r2.printArea();

    double side;
    cin >> side;
    Rectangle r3(side);
    r3.printArea();

    return 0;
}

