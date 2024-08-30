#include <iostream>

using namespace std;

class X {
protected:
    double x;

public:
    void setX(double val) {
        x = val;
    }
};

class Y {
protected:
    double y;

public:
    void setY(double val) {
        y = val;
    }
};

class Sum : public X, public Y {
public:
    void displaySum() {
        cout << "Sum = " << (x + y) << endl;
    }
};

int main() {
    Sum s;
    double a, b;
    
    cout << "enter value of x: ";
    cin >> a;
    s.setX(a);
    
    cout << "enter value of y: ";
    cin >> b;
    s.setY(b);
    
    s.displaySum();
    return 0;
}

