#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x % 10 == x / 100)
    {
        cout << x << " is palindrome" << endl;
    }
}