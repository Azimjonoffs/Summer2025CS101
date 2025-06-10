#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;

    if (w <= 0)
    {
        cout << "Invalid input" << endl;
    } else
    {
        switch (w)
        {
        case 1:
        case 2:
            cout << 3500 << endl;
            break;
        case 3:
            cout << 5500 << endl;
            break;
        case 4:
        case 5:
            cout << 8500 << endl;
        case 6:
        case 7:
        case 8:
            cout << 10500 << endl;
        default:
            cout << "Can't be shipped" << endl;
        }
    }
}