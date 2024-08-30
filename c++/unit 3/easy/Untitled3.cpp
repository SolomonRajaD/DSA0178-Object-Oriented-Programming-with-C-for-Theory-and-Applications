#include <iostream>
using namespace std;

class CubeCalculator {
    int num;
public:
    CubeCalculator(int n) : num(n) {}
    ~CubeCalculator() {
        for (int i = 1; i <= num; ++i) {
            cout << "Cube of " << i << " is " << i * i * i << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    CubeCalculator cc(n);
    return 0;
}

