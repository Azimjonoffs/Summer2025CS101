#include <iostream>
using namespace std;

void powerTwo(int &n)
{
    n *= n;
}

int main()
{
    int n = 3;
    powerTwo(n);
    cout << n << endl;
}