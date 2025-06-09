#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x > 0)
    {
        cout << "Positive\n" << endl;
    }
    else if (x < 0)
    {
        cout << "Negative\n" << endl;
    }
    else
    {
        cout << "Neither positive nor negative\n" << endl;
    }
}