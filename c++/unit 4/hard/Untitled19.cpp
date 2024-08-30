#include <iostream>
using namespace std;

void sortArray(float* arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                float temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    float numbers[100];
    int count = 0;

    cout << "Enter Infinite Numbers and (-1 To Stop Reading)" << endl;
    while (true) {
        cin >> numbers[count];
        if (numbers[count] == -1) break;
        count++;
    }

    sortArray(numbers, count);

    cout << "The Ascending order is given below:" << endl;
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}

