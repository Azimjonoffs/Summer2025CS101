#include <iostream>
using namespace std;

int value = 10;

void fun()
{
    int value = 5;
    cout << value << endl;
}

int main()
{
    fun();
    int value = 3;
    cout << value << endl;
    cout << ::value << endl;
}