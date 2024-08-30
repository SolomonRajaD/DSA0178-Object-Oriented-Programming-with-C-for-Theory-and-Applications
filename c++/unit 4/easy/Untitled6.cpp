#include <iostream>

using namespace std;

class Sample {
    int x;

public:
    Sample(int val) : x(val) {}
    
    void display() {
        cout << "x = " << this->x << endl;
    }
};

int main() {
    Sample obj(20);
    obj.display();
    return 0;
}

