// Insertion Sort
#include <iostream>
using namespace std;

void inSort(int arr[], int n)
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

int main()
{
    int arr[3] = {9, 4, 6};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    inSort(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}