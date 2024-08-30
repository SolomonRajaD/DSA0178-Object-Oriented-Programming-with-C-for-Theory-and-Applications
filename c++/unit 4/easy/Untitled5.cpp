#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual void getDimensions() = 0;
    virtual void calculateArea() = 0;
    virtual void displayArea() = 0;
};

class Circle : public Shape {
    double radius;
    double area;

public:
    void getDimensions() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }
    
    void calculateArea() {
        area = M_PI * radius * radius;
    }
    
    void displayArea() {
        cout << "Area of circle: " << area << endl;
    }
};

class Square : public Shape {
    double length;
    double area;

public:
    void getDimensions() {
        cout << "Enter the length of the square: ";
        cin >> length;
    }
    
    void calculateArea() {
        area = length * length;
    }
    
    void displayArea() {
        cout << "Area of square: " << area << endl;
    }
};

int main() {
    Circle c;
    Square s;
    
    c.getDimensions();
    c.calculateArea();
    c.displayArea();
    
    s.getDimensions();
    s.calculateArea();
    s.displayArea();
    
    return 0;
}

