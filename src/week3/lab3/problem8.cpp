#include <iostream>
using namespace std;

int pow(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

int octalToDecimal(int n)
{
    int result = 0;
    int track = 0;
    while (n != 0)
    {
        result = result + ((n % 10) * pow(8, track));
        n /= 10;
        track++;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << octalToDecimal(n) << endl;
}