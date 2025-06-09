#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 'A' && c <= 'Z')
    {
        cout << "Uppercase alphabet" << endl;
    }
    else if (c >= 'a' && c <= 'z')
    {
        cout << "Lowercase alphabet" << endl;
    }
    else
    {
        cout << "It is not an alphabet" << endl;
    }
}