#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex() : real(0), imag(0) {}
    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator+(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex &c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2;
    int r1, i1, r2, i2;

    cout << "Enter the value of Complex Numbers a, b\n";
    cout << "Real part of first number: ";
    cin >> r1;
    cout << "Imaginary part of first number: ";
    cin >> i1;

    cout << "Enter the value of Complex Numbers a, b\n";
    cout << "Real part of second number: ";
    cin >> r2;
    cout << "Imaginary part of second number: ";
    cin >> i2;

    c1 = Complex(r1, i1);
    c2 = Complex(r2, i2);

    cout << "Input Values\n";
    c1.display();
    c2.display();

    cout << "Result\n";
    Complex sum = c1 + c2;
    sum.display();

    Complex diff = c1 - c2;
    diff.display();

    return 0;
}

