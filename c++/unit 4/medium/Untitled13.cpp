#include <iostream>
using namespace std;

class Number {
protected:
    int value;
public:
    void getNumber() {
        cout << "Enter an integer number: ";
        cin >> value;
    }
};

class Square : public Number {
public:
    void displaySquare() {
        cout << "Square of " << value << " is: " << value * value << endl;
    }
};

class Cube : public Number {
public:
    void displayCube() {
        cout << "Cube of " << value << " is: " << value * value * value << endl;
    }
};

int main() {
    Square sq;
    Cube cu;
    
    sq.getNumber();
    sq.displaySquare();

    cu.getNumber();
    cu.displayCube();

    return 0;
}

