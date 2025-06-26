#include <iostream>
using namespace std;

int year_to_century(int year)
{
    return year / 100 + 1;
}

int main()
{
    int year;
    cin >> year;

    cout << year_to_century(year);
}