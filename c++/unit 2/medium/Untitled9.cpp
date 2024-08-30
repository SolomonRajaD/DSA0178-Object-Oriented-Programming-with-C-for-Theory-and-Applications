#include <iostream>
using namespace std;

void multiplyMatrices(int mat1[][3], int mat2[][3], int result[][3], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < col; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int row = 3, col = 3;
    int mat1[3][3], mat2[3][3], result[3][3];

    cout << "Enter the first matrix element:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter the second matrix element:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> mat2[i][j];
        }
    }

    multiplyMatrices(mat1, mat2, result, row, col);

    cout << "Multiply of the matrix:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

