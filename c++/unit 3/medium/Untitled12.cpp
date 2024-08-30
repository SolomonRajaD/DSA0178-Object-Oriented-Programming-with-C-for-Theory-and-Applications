#include <iostream>
#include <cmath>
using namespace std;

class VolumeCalculator {
public:
    VolumeCalculator(double side) { 
        double volume = side * side * side;
        cout << fixed << volume << endl;
    }

    VolumeCalculator(double radius, double height) { 
        double volume = M_PI * radius * radius * height;
        cout << fixed << volume << endl;
    }
};

int main() {
    double side, radius, height;
    
    cin >> side;
    VolumeCalculator cube(side);
    
    cin >> radius >> height;
    VolumeCalculator cylinder(radius, height);

    return 0;
}

