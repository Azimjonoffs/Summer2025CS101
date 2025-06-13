#include <iostream>
using namespace std;

int main()
{
    int n;
    int rev = 0;
    cin >> n;

    while (n > 0)
    {
        rev = n % 10;
        n = n / 10;
        rev = rev * 10 + rev;
    }
    cout << rev;
}