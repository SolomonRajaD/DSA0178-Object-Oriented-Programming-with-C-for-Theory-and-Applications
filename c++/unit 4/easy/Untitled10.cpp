#include <iostream>

using namespace std;

class Complex {
    int real, imaginary;

public:
    Complex(int r, int i) : real(r), imaginary(i) {}
    void display() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main() {
    Complex c(1, 54);
    Complex* ptr = &c;
    ptr->display();
    return 0;
}

