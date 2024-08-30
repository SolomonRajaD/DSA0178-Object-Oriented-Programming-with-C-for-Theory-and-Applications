#include <iostream>
#include <string>
using namespace std;

inline bool isPalindrome(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter the string: ";
    cin >> input;

    if (isPalindrome(input)) {
        cout << "THE GIVEN STRING IS PALINDROME" << endl;
    } else {
        cout << "THE GIVEN STRING IS NOT PALINDROME" << endl;
    }

    return 0;
}

