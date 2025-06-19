#include <iostream>
using namespace std;

float series(int n)
{
    if (n == 0)
    {
        return 1.0;
    }
    else
    {
        return 1/n * series(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
}