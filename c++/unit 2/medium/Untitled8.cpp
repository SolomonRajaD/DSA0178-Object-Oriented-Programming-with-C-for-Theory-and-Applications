#include <iostream>
using namespace std;

class Box {
public:
    int length;  
private:
    int width;   

public:
    void setWidth(int w) {
        width = w;
    }

    int getWidth() const {
        return width;
    }
};

int main() {
    Box b;
    int w;
    cout << "Enter the Length of the box: ";
    cin >> b.length;
    cout << "Enter the Width of the box: ";
    cin >> w;

    b.setWidth(w);

    cout << "Length of box: " << b.length << endl;
    cout << "Width of box: " << b.getWidth() << endl;

    return 0;
}

