#include <iostream>
using namespace std;

class PrimeChecker {
    int num;
public:
    PrimeChecker(int n) : num(n) {}
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) return false;
        }
        return true;
    }
    ~PrimeChecker() {
        bool found = false;
        for (int i = 2; i <= num / 2; ++i) {
            if (isPrime(i) && isPrime(num - i)) {
                cout << num << " can be expressed as the sum of " << i << " and " << num - i << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << num << " cannot be expressed as the sum of two prime numbers." << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    PrimeChecker pc(n);
    return 0;
}

