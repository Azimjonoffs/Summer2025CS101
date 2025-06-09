#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d = 0, res1 = 0;
    cin >> a >> b >> c;

    d = b*b - 4*a*c;
    if(d < 0)
    {
        cout << "No roots" << endl;
    }
    else if(d == 0)
    {
        res1 = (-b - sqrt(d))/(2*a);
        cout << res1 << endl;
    }
    else
    {
        float res2 = 0;
        res1 = (-b + sqrt(d))/(2*a);
        res2 = (-b - sqrt(d))/(2*a);

        cout << res1 << endl;
        cout << res2 << endl;
    }
}