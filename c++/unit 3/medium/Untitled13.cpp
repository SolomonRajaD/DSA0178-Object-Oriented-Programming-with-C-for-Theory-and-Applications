#include <iostream>
using namespace std;

class Example {
public:
    Example(int x);  
    void show() const;

private:
    int data;
};

Example::Example(int x) : data(x) {} 

void Example::show() const {
    cout << "Data: " << data << endl;
}

int main() {
    int x;
    cin >> x;
    Example obj(x);
    obj.show();
    return 0;
}

