#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if (n <= 0)
    {
        cout<<"The depth is 0"<<endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout<<i;
            }
            cout<<endl;
        }
    }
}