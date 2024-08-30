 #include <iostream>
using namespace std;

class AddAmount {
protected:
    double amount;
public:
    AddAmount() : amount(50) {} // Initial amount is $50

    virtual void addAmount() {
        // Base class does not add any amount
    }

    void displayAmount() const {
        cout << "Total Amount is = " << amount << endl;
    }
};

class DerivedAmount : public AddAmount {
private:
    double additionalAmount;
public:
    DerivedAmount(double addAmount) : additionalAmount(addAmount) {}

    void addAmount() override {
        amount += additionalAmount;
    }
};

int main() {
    double userInput;
    cout << "Enter the amount: ";
    cin >> userInput;

    DerivedAmount obj(userInput);
    obj.addAmount();
    obj.displayAmount();

    return 0;
}

