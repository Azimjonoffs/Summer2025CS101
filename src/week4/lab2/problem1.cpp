#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int *ptrA;
    int array[10];

    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 100;
    }

    ptrA = array;

    for (int i = 0; i < 10; i++)
    {
        cout << ptrA + i <<  ": ";
        cout << *(ptrA + i) << endl;
    }
}