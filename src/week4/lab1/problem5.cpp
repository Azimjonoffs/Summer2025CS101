#include <iostream>
using namespace std;

int count(const string& s, char a)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == a)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    char a;
    cout << "Enter a character: ";
    cin >> a;
    cout << count(s, a) << endl;
}