#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    if (cin.fail() || size <= 0) {
        cout << "Invalid input. Please enter a positive integer for the size." << endl;
        return 1;
    }
    int* arr = new int[size];
    unordered_map<int, int> frequencyMap;

    cout << "Enter elements in the array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter Element " << i + 1 << ": ";
        cin >> arr[i];
        frequencyMap[arr[i]]++;
    }
    int mostFrequent = arr[0];
    int maxCount = frequencyMap[mostFrequent];

    for (auto& pair : frequencyMap) {
        if (pair.second > maxCount) {
            mostFrequent = pair.first;
            maxCount = pair.second;
        }
    }
    cout << "The most frequent element is: " << mostFrequent << endl;

    delete[] arr;

    return 0;
}

