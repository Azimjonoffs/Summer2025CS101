#include <iostream>
using namespace std;

int indexOfLargestElement(double arr[], int size)
{
    int largest = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] >= arr[largest])
        {
            largest = i;
        }
    }
    return largest;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    double arr[15];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Index of the largest element: " << indexOfLargestElement(arr, n) << endl;
}