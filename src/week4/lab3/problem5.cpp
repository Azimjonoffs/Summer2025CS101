#include <iostream>
using namespace std;

void printMatrix(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << rand() % 1000 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printMatrix(n);
}