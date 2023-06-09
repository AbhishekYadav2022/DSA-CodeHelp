// Insertion Sort
#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[n], arr[n - 1]);
            }
        }
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {11, 76, 54, 13, 95, 21};

    InsertionSort(arr, 6);

    PrintArray(arr, 6);

    return 0;
}