#include <iostream>
#include <vector>

using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    // Copying elements of arr1
    while (i < n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // Copying elements of arr2
    while (j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int arr1[5] = {2, 4, 6, 8, 10};
    int arr2[3] = {12, 14, 16};

    int arr3[8] = {0};

    merge(arr1, 5, arr2, 3, arr3);

    cout << "Array1 : ";
    print(arr1, 5);

    cout << "Array2 : ";
    print(arr2, 3);

    cout << "Array3 : ";
    print(arr3, 8);

    return 0;
}