#include <iostream>
using namespace std;

int minimum(int a, int b, int c)
{
    if (a <= b && a <= c)
    {
        return a;
    }
    else if (b <= c && b <= a)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int maximum(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= c && b >= a)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Minimum: " << minimum(a, b, c) << endl;
    cout << "Maximum: " << maximum(a, b, c) << endl;
}