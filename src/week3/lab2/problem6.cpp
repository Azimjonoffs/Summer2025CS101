#include <iostream>
using namespace std;

void reverseDigits(int &n)
{
    int temp = 0;
    while (n != 0)
    {
        temp = temp * 10 + n % 10;
        n = n / 10;
    }
    n = temp;
}

int main()
{
    int n;
    cin >> n;
    reverseDigits(n);
    cout << n << endl;
}