#include <iostream>
using namespace std;

class FloydsTriangle {
public:
    FloydsTriangle(int rows) : n(rows), current(1) {
        printTriangle();
    }

    ~FloydsTriangle() {}

private:
    int n;
    int current;

    void printTriangle() {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << current++ << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows;
    cin >> rows;
    FloydsTriangle ft(rows);
    return 0;
}

