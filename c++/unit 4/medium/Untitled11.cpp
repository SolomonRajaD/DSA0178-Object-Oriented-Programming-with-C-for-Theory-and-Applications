#include <iostream>
#include <cmath>
using namespace std;

class Circle {
protected:
    float radius;
public:
    void getRadius() {
        cout << "Enter the radius: ";
        cin >> radius;
    }

    float calculateArea() {
        return M_PI * radius * radius;
    }
};

class Rectangle {
protected:
    float length, breadth;
public:
    void getDimensions() {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
    }

    float calculateArea() {
        return length * breadth;
    }
};

class Cylinder : public Circle, public Rectangle {
private:
    float height;
public:
    void getHeight() {
        cout << "Enter the height: ";
        cin >> height;
    }

    float calculateVolume() {
        return Circle::calculateArea() * height;
    }
};

int main() {
    Cylinder cylinder;
    
    cout << "Getting the radius of the circle" << endl;
    cylinder.getRadius();
    cout << "The area = " << cylinder.calculateArea() << endl;

    cout << "Getting the length and breadth of the rectangle" << endl;
    cylinder.getDimensions();
    cout << "The area = " << cylinder.calculateArea() << endl;

    cout << "Getting the height and radius of the cylinder" << endl;
    cylinder.getHeight();
    cylinder.getRadius(); 
    cout << "The volume of the cylinder is: " << cylinder.calculateVolume() << endl;

    return 0;
}

