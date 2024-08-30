#include <iostream>
using namespace std;

class Number {
protected:
    int M, N, K;
public:
    void getInput() {
        cout << "Enter M: ";
        cin >> M;
        cout << "Enter N: ";
        cin >> N;
        cout << "Enter K: ";
        cin >> K;
    }
};

class Skipper : public Number {
public:
    void printNumbers() {
        if (K <= 0) {
            cout << "K should be a positive integer" << endl;
            return;
        }
        for (int i = M; i <= N; i += K + 1) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    Skipper skipper;
    skipper.getInput();
    skipper.printNumbers();
    return 0;
}

