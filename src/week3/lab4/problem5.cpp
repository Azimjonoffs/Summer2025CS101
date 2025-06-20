#include <iostream>
using namespace std;

bool strictlyEqual(const int list1[], const int list2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (list1[i] != list2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr1[n];
    int arr2[n];
    cout << "Enter elements of list1: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter elements of list2: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    if (strictlyEqual(arr1, arr2, n))
    {
        cout << "Two lists are strictly identical" << endl;
    }
    else
    {
        cout << "Two lists are not strictly identical" << endl;
    }
}