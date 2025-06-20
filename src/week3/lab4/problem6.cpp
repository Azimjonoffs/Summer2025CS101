#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int upper = 0;
    int lower = 0;
    int digit = 0;
    int special = 0;

    for (int i = 0; i < n; i++)
    {
        if (65 <= arr[i] && arr[i] <= 90)
        {
            upper++;
        }
        else if (97 <= arr[i] && arr[i] <= 122)
        {
            lower++;
        }
        else if (48 <= arr[i] && arr[i] <= 57)
        {
            digit++;
        }
        else
        {
            special++;
        }
    }

    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;
    cout << "Digits: " << digit << endl;
    cout << "Special: " << special << endl;
}