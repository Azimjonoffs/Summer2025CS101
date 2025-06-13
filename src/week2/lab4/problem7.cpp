#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int even = 0, odd = 0;

    srand(time(NULL));
    for (int i = 1; i <= 1000; i++)
    {
        int x = rand();
        if (x % 2 == 0)
        {
            even++;
        } else
        {
            odd++;
        }
    }
    cout << even << endl;
    cout << odd << endl;
}