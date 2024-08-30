#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> authors = {1, 2, 3, 4, 5};
    int removeAuthor = 1;
    int addAuthor = 6;

    auto it = find(authors.begin(), authors.end(), removeAuthor);
    if (it != authors.end()) {
        authors.erase(it);
        cout << "Author No. " << removeAuthor << " is removed from the paper...." << endl;
    }
    
    authors.push_back(addAuthor);
    cout << "5th author inserted...." << endl;

    return 0;
}

