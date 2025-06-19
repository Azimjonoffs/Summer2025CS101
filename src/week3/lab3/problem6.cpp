#include <iostream>
using namespace std;

template <typename T> void compareValues(T parameter1, T parameter2)
{
    if (parameter1 < parameter2)
    {
        cout << parameter2 << endl;
    }
    else if (parameter2 < parameter1)
    {
        cout << parameter1 << endl;
    }
    else
    {
        cout << "Values are equal" << endl;
    }
}

template <typename T> T middle(T parameter1, T parameter2, T parameter3)
{
    if (parameter1 > parameter2 && parameter1 > parameter3)
    {
        if (parameter2 > parameter3)
        {
            return parameter2;
        }
        else
        {
            return parameter3;
        }
    }   else if (parameter2 > parameter1 && parameter2 > parameter3)
    {
        if (parameter1 > parameter3)
        {
            return parameter1;
        }
        else
        {
            return parameter3;
        }
    }
    else
    {
        if (parameter3 > parameter1 && parameter3 > parameter2)
        {
            if (parameter2 > parameter1)
            {
                return parameter2;
            }
            else
            {
                return parameter1;
            }
        }
    }
}

template <typename T>
T average(T parameter1, T parameter2)
{
    return (parameter1 + parameter2) / 2;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    compareValues(a, b);
    cout << middle(a, b, c) << endl;
    cout << average(a, c) << endl;
}