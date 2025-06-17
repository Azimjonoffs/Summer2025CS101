#include <iostream>
using namespace std;

int print_numbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        cout << n << endl;
        return print_numbers(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << print_numbers(n) << endl;
}