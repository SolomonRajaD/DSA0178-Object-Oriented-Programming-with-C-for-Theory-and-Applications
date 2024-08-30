#include <iostream>
using namespace std;

class ReverseNumber {
public:
    ReverseNumber(int num) {
        int reversed = 0;
        while (num != 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        cout << "Reversed number is " << reversed << endl;
    }
};

int main() {
    int num;
    cin >> num;
    ReverseNumber rn(num);
    return 0;
}

