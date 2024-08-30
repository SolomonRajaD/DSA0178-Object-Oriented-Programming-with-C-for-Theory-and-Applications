#include <iostream>

using namespace std;

class A {
public:
    int a;
    A(int val) : a(val) {}
};

class B {
public:
    int b;
    B(int val) : b(val) {}
};

class C : public A, public B {
public:
    int c;
    C(int val1, int val2, int val3) : A(val1), B(val2), c(val3) {}
    
    void display() {
        cout << "value of a: " << a << endl;
        cout << "value of b: " << b << endl;
        cout << "value of c: " << c << endl;
    }
};

int main() {
    C obj(100, 200, 300);
    obj.display();
    return 0;
}

