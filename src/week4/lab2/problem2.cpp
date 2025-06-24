#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    float *ptr, arr[SIZE];

    ptr = arr;

    for (int i = 0; i < SIZE; i++)
    {
        int input;
        cin >> input;
        ptr[i] = input * 0.3;
    }

    for (int i = 9; i > -1; i--)
    {
        cout << ptr[i] << endl;
    }
}