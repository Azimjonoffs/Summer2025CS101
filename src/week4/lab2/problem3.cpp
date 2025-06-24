#include <iostream>
using namespace std;

int evenCount(const int* a, int size) {
    int count = 0;
    const int* currentPtr = a;

    for (int i = 0; i < size; ++i) {
        if ((*currentPtr) % 2 == 0) {
            count++;
        }
        currentPtr++;
    }

    return count;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int* myArray;
    myArray = new int[size];

    for (int i = 0; i < size; ++i) {
        cin >> *(myArray + i);
    }

    int evenNumbersCount = evenCount(myArray, size);

    cout << "Number of even numbers in the array: " << evenNumbersCount << endl;
}