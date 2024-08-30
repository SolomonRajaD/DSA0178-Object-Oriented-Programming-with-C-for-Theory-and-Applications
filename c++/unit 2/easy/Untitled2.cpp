#include <iostream>
#include <string>
using namespace std;

bool isValidUsername(const string& username) {
    if (username.length() < 6) return false;
    for (char c : username) {
        if (!isalnum(c)) return false;
    }
    return true;
}
int main() {
    string username1, username2;
    cout << "Enter the user name: ";
    cin >> username1;
    cout << "Reenter the user name: ";
    cin >> username2;

    if (username1 == username2 && isValidUsername(username1)) {
        cout << "User name is valid" << endl;
    } else {
        cout << "User name is Invalid" << endl;
    }

    return 0;
}

