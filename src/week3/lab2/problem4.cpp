#include <iostream>
using namespace std;

void swapTwo(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a = 1, b = 2;
    cout << a << " " << b << endl;
    swapTwo(a, b);
    cout << a << " " << b << endl;
}