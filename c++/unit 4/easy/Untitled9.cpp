#include <iostream>

using namespace std;

class Rectangle {
    int length;
    int width;

public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }
    
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle rectangles[2];
    rectangles[0].setDimensions(4, 7);
    rectangles[1].setDimensions(5, 4);

    cout << rectangles[0].area() << endl;
    cout << rectangles[1].area() << endl;

    return 0;
}

