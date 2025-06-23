#include <iostream>
#include <vector>
using namespace std;

vector<int> sortVector(vector<int> v) {
    int n = v.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
    return v;
}

int main()
{
    int size;
    cout << "Enter size of vector: ";
    cin >> size;

    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        if (num > 0)
        {
            v.push_back(num);
        }
    }

    v = sortVector(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}