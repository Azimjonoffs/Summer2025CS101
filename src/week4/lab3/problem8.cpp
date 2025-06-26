#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, m;
    cin >> n >> m;

    cout << "Before swapping:" << endl;
    cout << n << " " << m << endl;

    swap(&n, &m);

    cout << "After swapping:" << endl;
    cout << n << " " << m << endl;
}