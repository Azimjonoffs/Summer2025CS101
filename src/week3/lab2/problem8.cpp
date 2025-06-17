#include <iostream>
using namespace std;

int sumNumbers(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        return n + sumNumbers(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << sumNumbers(n) << endl;
}