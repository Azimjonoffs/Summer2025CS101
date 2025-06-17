#include <iostream>
using namespace std;

void sayHello()
{
    static int count = 0;
    cout << "Hello! " << ++count << endl;
}

int main()
{
    sayHello();
    sayHello();
}