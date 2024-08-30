#include <iostream>

using namespace std;

class A {
protected:
    int x;

public:
    A(int val) : x(val) {}
};

class B : private A {
public:
    B(int val) : A(val) {}
    
    void display() {
        cout << "Here x is the protected data member of class A, class A is inherited privately to class B. In private inheritance only protected data member and member functions can be accessed by the derived class." << endl;
    }
};

int main() {
    B b(10);
    b.display();
    return 0;
}

