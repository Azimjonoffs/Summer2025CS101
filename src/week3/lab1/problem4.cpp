#include <iostream>
using namespace std;

void fun(double r)
{
    const double PI = 3.141592653589793;
    cout << "Circumference: " << 2*r*PI << endl;
    cout << "Area: " << PI*r*r << endl;
}

void fun(double a, double b)
{
    cout << "Perimeter: " << 2*(a+b) << endl;
    cout << "Area: " << a*b << endl;
}

int main()
{
    double a, b;
    cin >> a >> b;
    fun(a, b);
}