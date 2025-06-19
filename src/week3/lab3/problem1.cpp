#include <iostream>
using namespace std;

int power(int num, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return num * power(num, p - 1);
    }
}

int main()
{
    int num, p;
    cin >> num >> p;
    cout << power(num, p);
}