#include <iostream>
using namespace std;

void sumArrays(const double* arr1, const double* arr2, double* sum, int size) {
    for (int i = 0; i < size; ++i) {
        *(sum + i) = *(arr1 + i) + *(arr2 + i);
    }
}

int main() {
    int size;

    cout << "Enter the size of the arrays: ";
    cin >> size;

    double* array1 = new double[size];
    double* array2 = new double[size];
    double* sumArray = new double[size];

    cout << "Enter " << size << " numbers for the FIRST array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> *(array1 + i);
    }

    cout << "Enter " << size << " numbers for the SECOND array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> *(array2 + i);
    }

    sumArrays(array1, array2, sumArray, size);

    for (int i = 0; i < size; ++i) {
        cout << *(sumArray + i) << endl;
    }
}