#include <iostream>
using namespace std;

class DecimalToBinary {
public:
    DecimalToBinary(int num) {
        convert(num);
    }

private:
    void convert(int num) {
        if (num == 0) {
            cout << 0 << endl;
            return;
        }
        string binary;
        while (num > 0) {
            binary = (num % 2 == 0 ? '0' : '1') + binary;
            num /= 2;
        }
        cout << binary << endl;
    }
};

int main() {
    int num;
    cin >> num;
    DecimalToBinary dtb(num);
    return 0;
}

