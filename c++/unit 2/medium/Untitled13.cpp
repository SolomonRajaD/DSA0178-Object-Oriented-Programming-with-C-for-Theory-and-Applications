#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> removeDuplicates(const vector<int>& arr) {
    vector<int> uniqueArr;
    for (int num : arr) {
        if (find(uniqueArr.begin(), uniqueArr.end(), num) == uniqueArr.end()) {
            uniqueArr.push_back(num);
        }
    }
    return uniqueArr;
}

int main() {
    vector<int> arr = {15, 14, 25, 14, 32, 14, 31};
    sort(arr.begin(), arr.end());

    vector<int> uniqueArr = removeDuplicates(arr);

    cout << "Sorted Array: ";
    for (int num : uniqueArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

