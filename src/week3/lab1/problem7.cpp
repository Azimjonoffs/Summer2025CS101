#include <iostream>
using namespace std;

int reversedInt(int n)
{
    int temp = 0;
    while (n != 0)
    {
        temp = temp * 10 + n % 10;
        n = n / 10;
    }
    return temp;
}

void displayEven(int n)
{
    n = reversedInt(n);
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << n % 10 << " ";
        }
        n = n / 10;
    }
}

int main()
{
    int n;
    cin >> n;
    displayEven(n);
}