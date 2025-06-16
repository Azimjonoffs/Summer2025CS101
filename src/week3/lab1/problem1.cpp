#include <iostream>
using namespace std;

double product(double number1, double number2)
{
    return number1 * number2;
}

int main()
{
    double a, b;
    cin >> a >> b;
    cout << product(a, b) << endl;
}