#include <iostream>
using namespace std;

class Shape {
public:
    virtual void displayArea() = 0;
};

class Rectangle : public Shape {
protected:
    double length;
    double breadth;
public:
    void getDimensions() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void displayArea() override {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

class Cuboid : public Rectangle {
private:
    double height;
public:
    void getHeight() {
        cout << "Enter height: ";
        cin >> height;
    }

    void displayVolume() {
        cout << "Volume of Cuboid: " << length * breadth * height << endl;
    }
};

int main() {
    Cuboid cuboid;
    cuboid.getDimensions();
    cuboid.getHeight();
    cuboid.displayArea();
    cuboid.displayVolume();
    return 0;
}

