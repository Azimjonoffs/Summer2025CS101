#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    double* arrayPtr = new double[n];

    for(int i = 0; i < n; i++)
    {
        cin >> *(arrayPtr + i);
    }

    double* currentPtr = arrayPtr + (n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << *currentPtr << " ";
        currentPtr--;
    }

}