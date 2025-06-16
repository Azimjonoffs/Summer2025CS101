#include <iostream>
using namespace std;

void fun(double r)
{
    const double PI = 3.141592653589793;
    cout << "Circumference: " << 2*r*PI << endl;
    cout << "Area: " << PI*r*r << endl;
}

int main()
{
    double r;
    cin >> r;
    fun(r);
}