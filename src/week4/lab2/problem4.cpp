#include <iostream>
using namespace std;

bool isMirrored(const int* a, const int* b, int size) {
    const int* ptrA = a;
    const int* ptrB = b;

    for (int i = 0; i < size; ++i) {
        if (*ptrA != *ptrB) {
            return false;
        }

        ptrA++;
        ptrB--;
    }
    return true;
}

int main() {
    int size;

    cout << "Enter the size of the arrays: ";
    cin >> size;

    int* array1 = new int[size];
    int* array2 = new int[size];

    cout << "Enter " << size << " integer numbers for the FIRST array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> *(array1 + i);
    }

    cout << "Enter " << size << " integer numbers for the SECOND array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> *(array2 + i);
    }

    bool mirroredResult = isMirrored(array1, (array2 + size - 1), size);
    cout << mirroredResult << endl;
}