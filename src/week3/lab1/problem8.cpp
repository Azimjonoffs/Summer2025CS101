#include <iostream>
using namespace std;

int cubeOfDigits(int n)
{
    int result = 0;
    while (n > 0)
    {
        result += pow(n % 10, 3);
        n /= 10;
    }
    return result;
}

bool isArmstrong(int n)
{
    if (n == cubeOfDigits(n))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    if (isArmstrong(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}