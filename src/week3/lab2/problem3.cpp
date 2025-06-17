#include <iostream>
using namespace std;

void updateMax(int x)
{
    static int max = 0;
    if (max < x)
    {
        max = x;
    }
    cout << "Max so far: " << max << endl;
}

int main()
{
    updateMax(5);
    updateMax(10);
    updateMax(3);
}