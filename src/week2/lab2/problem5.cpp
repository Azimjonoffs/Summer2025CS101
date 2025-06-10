#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int r = 1 + rand() % 100;

    string guess;
    cin >> guess;

    if (r%2==0 && guess == "even")
    {
        cout << "You won!" << endl;
    } else if (r%2==1 && guess == "odd")
    {
        cout << "You won!" << endl;
    } else
    {
        cout << "You lost! " << r << endl;
    }
}