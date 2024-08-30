#include <iostream>
using namespace std;

class SeriesSum {
public:
    SeriesSum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        cout << "Sum of series up to " << n << " is " << sum << endl;
    }
};

int main() {
    int n;
    cin >> n;
    SeriesSum ss(n);
    return 0;
}

