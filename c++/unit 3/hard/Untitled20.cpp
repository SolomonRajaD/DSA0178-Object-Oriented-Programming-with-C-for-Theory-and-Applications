#include <iostream>
using namespace std;

class Add {
    int value;
public:
    Add(int v = 0) : value(v) {}

    Add operator+(const Add& other) const {
        return Add(value + other.value);
    }

    void printSum() const {
        cout << "sum: " << value << endl;
    }
};

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    
    Add a1(num1), a2(num2);
    Add result = a1 + a2;
    result

