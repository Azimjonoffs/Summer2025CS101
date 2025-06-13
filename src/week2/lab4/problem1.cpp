#include <iostream>
using namespace std;

int main()
{
    int num;
    while (true)
    {
        cin >> num;
        cout << num << " ";
        if (num < 0)
        {
            cout<<endl<<num<<" is negative";
            break;
        }
        cout << num << " ";
    }
}