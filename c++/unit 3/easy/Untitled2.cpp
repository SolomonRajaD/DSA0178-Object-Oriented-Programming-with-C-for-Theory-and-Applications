#include <iostream>
using namespace std;

class CubeCalculator {
public:
    CubeCalculator(int n) {
        for (int i = 1; i <= n; ++i) {
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

