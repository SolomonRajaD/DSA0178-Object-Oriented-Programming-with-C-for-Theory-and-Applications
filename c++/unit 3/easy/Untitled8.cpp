#include <iostream>
#include <cmath>
using namespace std;

class BinaryToOctal {
    int binary;
public:
    BinaryToOctal(int b) : binary(b) {
        int decimal = 0, octal = 0, place = 1;
        while (binary > 0) {
            decimal += (binary % 10) * place;
            binary /= 10;
            place *= 2;
        }
        place = 1;
        while (decimal > 0) {
            octal += (decimal % 8) * place;
            decimal /= 8;
            place *= 10;
        }
        cout << "Octal representation is " << octal << endl;
    }
};

int main() {
    int b;
    cin >> b;
    BinaryToOctal bto(b);
    return 0;
}

