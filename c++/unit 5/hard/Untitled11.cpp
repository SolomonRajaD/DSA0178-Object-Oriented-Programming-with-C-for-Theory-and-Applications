#include <iostream>
using namespace std;

class IncomeTax {
public:
    virtual void TDS(double income) = 0;
};

class Slab1 : public IncomeTax {
public:
    void TDS(double income) override {
        if (income <= 150000) {
            cout << "No tax" << endl;
        } else {
            Slab2 slab2;
            slab2.TDS(income); // Delegate to Slab2 if income exceeds Slab1's range
        }
    }
};

class Slab2 : public Slab1 {
public:
    void TDS(double income) override {
        if (income > 150000 && income <= 300000) {
            cout << "Tax = " << (income - 150000) * 0.10 << endl;
        } else {
            Slab3 slab3;
            slab3.TDS(income); // Delegate to Slab3 if income exceeds Slab2's range
        }
    }
};

class Slab3 : public Slab2 {
public:
    void TDS(double income) override {
        if (income > 300000 && income <= 500000) {
            cout << "Tax = " << (income - 300000) * 0.20 + 15000 << endl;
        } else if (income > 500000) {
            cout << "Tax = " << (income - 500000) * 0.30 + 65000 << endl;
        }
    }
};

int main() {
    double income;
    cout << "Enter the total income: ";
    cin >> income;

    Slab1 slab1;
    slab1.TDS(income);

    return 0;
}

