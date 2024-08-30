#include <iostream>
#include <cmath>
using namespace std;

class AreaCalculator {
public:
    AreaCalculator(double radius) { 
        double area = M_PI * radius * radius;
        cout << fixed << area << endl;
    }

    AreaCalculator(double length, double width) { 
        double area = length * width;
        cout << fixed << area << endl;
    }

    AreaCalculator(double base, double height) { 
        double area = 0.5 * base * height;
        cout << fixed << area << endl;
    }
};

int main() {
    double r, l, w, b, h;
    
    cin >> r;
    AreaCalculator circle(r);
    
    cin >> l >> w;
    AreaCalculator rectangle(l, w);
    
    cin >> b >> h;
    AreaCalculator triangle(b, h);

    return 0;
}

