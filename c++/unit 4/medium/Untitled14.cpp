#include <iostream>
using namespace std;

int findGreatest(int *a, int *b, int *c) {
    return (*a > *b ? (*a > *c ? *a : *c) : (*b > *c ? *b : *c));
}

int main() {
    int a, b, c;
    cout << "Enter the three numbers:" << endl;
    cin >> a >> b >> c;
    
    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &c;
    
    int greatest = findGreatest(ptrA, ptrB, ptrC);
    cout << "The greatest is: " << greatest << endl;
    
    return 0;
}

