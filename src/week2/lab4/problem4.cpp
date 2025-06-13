#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (true)
    {
        int count = 0;
        n++;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            break;
        }
    }
    cout << n << endl;
}