#include <iostream>
using namespace std;

float series(int n)
{
    if (n == 1)
    {
        return 1.0/3;
    }
    else
    {
        return 1.0/(n*(n+2)) + series(n-1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << series(n) << endl;
}