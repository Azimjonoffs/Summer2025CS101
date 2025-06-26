#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout << "Address of number = " << &n << endl;

    int* m = &n;
    cout<<"Address of pointer = " << &m << endl;
    cout<<"Value of pointer = " << *m << endl;
}