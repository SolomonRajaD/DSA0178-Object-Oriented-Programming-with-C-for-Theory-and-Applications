#include <iostream>
#include <iomanip>
using namespace std;

class Student {
public:
    string name;
    int regno;
    float mark1, mark2, mark3;

    void input() {
        cout << "ENTER THE STUDENT NAME => ";
        cin.ignore();
        getline(cin, name);
        cout << "ENTER THE REGISTER NUMBER => ";
        cin >> regno;
        cout << "MARK 1 => ";
        cin >> mark1;
        cout << "MARK 2 => ";
        cin >> mark2;
        cout << "MARK 3 => ";
        cin >> mark3;
    }

    void show() {
        float average = (mark1 + mark2 + mark3) / 3.0;
        cout << fixed << setprecision(2);
        cout << "AVERAGE SCORE IS => " << average << endl;

        if (average > 90) cout << "S GRADE" << endl;
        else if (average > 80) cout << "A GRADE" << endl;
        else if (average > 70) cout << "C GRADE" << endl;
        else if (average > 60) cout << "D GRADE" << endl;
        else if (average > 50) cout << "E GRADE" << endl;
        else cout << "F GRADE" << endl;
    }
};

int main() {
    int n;
    cout << "ENTER THE NUMBER OF STUDENT ENTRIES => ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Student s;
        s.input();
        s.show();
    }

    return 0;
}

