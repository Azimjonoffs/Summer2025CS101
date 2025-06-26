#include <iostream>
using namespace std;

int reversed_int(int n)
{
    int reversed = 0;
    while (n != 0)
    {
        reversed *= 10;
        reversed += n % 10;
        n /= 10;
    }
    return reversed;
}

int main()
{
    int counter = 0;
    int a = 1;

    while (counter < 50)
    {
        if (a % 2 == 0 && a == reversed_int(a))
        {
            if (counter % 5 == 0)
            {
                cout << endl;
            }
            counter++;
            cout << a << " ";
        }
        a++;
    }
}