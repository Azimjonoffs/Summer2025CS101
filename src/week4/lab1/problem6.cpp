#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> v;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        v.push_back(x);
    }

    double min = 100;
    for (int i = 0; i < n; i++)
    {
        if (min > v[i])
        {
            min = v[i];
        }
    }
    cout << "Minimum = " << v[0] << endl;

    double max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < v[i])
        {
            max = v[i];
        }
    }
    cout << "Maximum = " << max << endl;

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    double avg = sum / n;
    cout << "Average = " << avg << endl;
}