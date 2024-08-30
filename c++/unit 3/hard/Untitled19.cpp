#include <iostream>
using namespace std;

class Shape {
public:
    void printArea(double side) { 
        cout << side * side << endl;
    }

    void printArea(double length, double breadth) {  
        cout << length * breadth << endl;
    }
};

int main() {
    double side, length, breadth;
    cin >> side;
    Shape s;
    s.printArea(side);

    cin >> length >> breadth;
    s.printArea(length, breadth);

    return 0;
}

