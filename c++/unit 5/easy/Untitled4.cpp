#include <iostream>
using namespace std;

class Grandfather {
protected:
    double property;
public:
    Grandfather(double p) : property(p) {}
    virtual void accessProperty() = 0;
};

class Grandson : public Grandfather {
public:
    Grandson(double p) : Grandfather(p) {}

    void accessProperty() override {
        if (property > 0) {
            cout << "Received the Property" << endl;
        } else {
            cout << "Invalid Property Amount" << endl;
        }
    }
};

int main() {
    double amount;
    cout << "Enter property amount: ";
    cin >> amount;

    Grandson grandson(amount);
    grandson.accessProperty();
    return 0;
}

