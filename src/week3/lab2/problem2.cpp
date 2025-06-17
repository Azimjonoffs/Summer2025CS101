#include <iostream>
using namespace std;

void addToSum(int x)
{
    static int sum = 0;
    sum += x;
    cout << "Current sum: "<< sum << endl;
}

int main()
{
    addToSum(5);
    addToSum(10);
    addToSum(3);
}