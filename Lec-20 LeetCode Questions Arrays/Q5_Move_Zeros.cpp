// Move 0s to right
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void moveZeros(int arr[], int size)
{
    int i = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main()
{
    int arr[7] = {2, 0, 3, 6, 0, 5, 0};

    printArray(arr, 7);

    moveZeros(arr, 7);

    printArray(arr, 7);

    return 0;
}