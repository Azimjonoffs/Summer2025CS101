#include <iostream>
using namespace std;

int reverseDigits(int n)
{
    int reversed = 0;
    while (n != 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

void digitToWord(int n)
{
    switch (n)
    {
    case 1:
        cout << "one ";
        break;
    case 2:
        cout << "two ";
        break;
    case 3:
        cout << "three ";
        break;
    case 4:
        cout << "four ";
        break;
    case 5:
        cout << "five ";
        break;
    case 6:
        cout << "six ";
        break;
    case 7:
        cout << "seven ";
        break;
    case 8:
        cout << "eight ";
        break;
    case 9:
        cout << "nine ";
        break;
    case 0:
        cout << "zero ";
        break;
    default:
        break;
    }
}

void numberToWord(int n)
{
    n = reverseDigits(n);
    while (n > 0)
    {
        digitToWord(n%10);
        n /= 10;
    }
}

int main()
{
    int n;
    cin >> n;
    numberToWord(n);
}