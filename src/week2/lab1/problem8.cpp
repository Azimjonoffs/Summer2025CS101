#include <iostream>
using namespace std;

int main()
{
    int n, even = 0, odd = 0;
    cin >> n;

    while (n>0)
    {
        if (n%2 == 0) even++;
        else odd++;
        n = n/10;
    }

    if (even > odd)
    {
        cout << "More even digits" << endl;
    }
    else if (even < odd)
    {
        cout << "More odd digits" << endl;
    }
    else
    {
        cout << "Equal even and odd digits" << endl;
    }
}