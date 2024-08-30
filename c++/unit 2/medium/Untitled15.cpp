#include <iostream>
using namespace std;

class Largest {
private:
    int a, b;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    friend void findMax(const Largest& obj);
};

void findMax(const Largest& obj) {
    int max = (obj.a > obj.b) ? obj.a : obj.b;
    cout << "Maximum number is " << max << endl;
}

int main() {
    Largest l;
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    l.setData(num1, num2);
    findMax(l);

    return 0;
}

