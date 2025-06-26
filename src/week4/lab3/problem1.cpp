#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        int a;
        cin >> a;
        if (a >= 0) { count += 1; }
    }

    if (count == 0) { cout << 0; } else { cout << 1; }
}