#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double sum = 0;

    for (int i = 1; i < n; i++)
    {
        sum += 1.0/i;
        cout << 1 << "/" << i << " + ";;
    }
    sum += 1.0/n;
    cout << 1 << "/" << n << endl;
    cout << "The sum is " << sum << endl;
}