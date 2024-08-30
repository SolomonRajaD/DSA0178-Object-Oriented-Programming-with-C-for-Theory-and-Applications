#include <iostream>
using namespace std;

class AddAmount {
    double amount;
public:
    AddAmount() : amount(50) {}
    AddAmount(double addAmount) : amount(50 + addAmount) {}

    void printAmount() const {
        cout << amount << endl;
    }
};

int main() {
    double addAmount;
    cin >> addAmount;
    AddAmount piggyBank1;
    piggyBank1.printAmount();

    AddAmount piggyBank2(addAmount);
    piggyBank2.printAmount();

    return 0;
}

