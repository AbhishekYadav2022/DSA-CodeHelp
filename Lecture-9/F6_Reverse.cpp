// Reversing an array
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int size)
{
    int a, temp;
    if (size % 2 == 0)
    {
        a = size / 2;
    }
    else
    {
        a = (size - 1) / 2;
    }
    for (int i = 0; i < a; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    int size;
    int arr[100];
    cout << "Enter the number of elements: ";
    cin >> size;
    // Taking elements
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Printing the original array
    cout << "Original Array: ";
    printArray(arr, size);

    // Reversing the array
    reverseArray(arr, size);

    // Printing the reversed array
    cout << "Reversed Array: ";
    printArray(arr, size);
    return 0;
}