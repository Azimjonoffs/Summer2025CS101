#include <iostream>
using namespace std;

int find_element(const int array[], const int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout << "Enter size: ";
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the element you want to find: ";
    int n;
    cin >> n;
    int result = find_element(array, size, n);
    cout << "The position of the element in the array: " << result << endl;
}