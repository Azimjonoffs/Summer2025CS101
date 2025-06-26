#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        v.push_back(n);
    }

    cout << "Front and Back" << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;


    cout << "Removing the elements under 10" << endl;
    int counter = 0;

    while (v.size() > counter)
    {
        if (v.at(counter) >= 10)
        {
            counter++;
        }
        else
        {
            v.erase(v.begin() + counter);
        }
    }

    cout << "Inserting new elements" << endl;
    v.insert(v.begin() + 1, 33);
    v.insert(v.end() - 1, 55);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}