#include <iostream>
using namespace std;

const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0.0;

    for (int i = 0; i < rowSize; ++i) {
        sum += m[i][columnIndex];
    }
    return sum;
}

int main() {
    int rowSize;

    cout << "Enter the number of rows for the matrix: ";
    cin >> rowSize;

    double matrix[rowSize][SIZE];

    for (int i = 0; i < rowSize; ++i) {
        cout << "Enter " << SIZE << " numbers for row " << i << ": " << endl;
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Column Sums:" << endl;
    for (int j = 0; j < SIZE; ++j) {
        double columnSum = sumColumn(matrix, rowSize, j);
        cout << "Sum of column " << j << " is: " << columnSum << endl;
    }
}