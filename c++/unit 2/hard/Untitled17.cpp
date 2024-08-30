#include <iostream>
using namespace std;

class Series {
public:
    int limit;

    void input() {
        cout << "Enter the limit: ";
        cin >> limit;
    }

    void show() {
        int a = 0, b = 1, c;
        if (limit <= 0) {
            cout << "Invalid limit." << endl;
            return;
        }
        cout << a << " ";
        if (limit > 1) {
            cout << b << " ";
        }
        for (int i = 2; i < limit; ++i) {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
    }
};

int main() {
    Series s;
    s.input();
    s.show();
    return 0;
}

