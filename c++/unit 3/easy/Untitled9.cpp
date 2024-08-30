#include <iostream>
using namespace std;

class DivisibleByNine {
public:
    DivisibleByNine() {
        int sum = 0, count = 0;
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                sum += i;
                ++count;
            }
        }
        cout << "Count: " << count << endl;
        cout << "Sum: " << sum << endl;
    }
    ~DivisibleByNine() {}
};

int main() {
    DivisibleByNine dbn;
    return 0;
}

