#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int* arrPtr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arrPtr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arrPtr[i] % 2 == 1) { count++; }
    }

    cout<<count<<endl;
}