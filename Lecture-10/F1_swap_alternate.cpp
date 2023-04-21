// Swap alternate elements in an array
#include <iostream>
using namespace std;

// Function to print array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Function to swap alternate
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int even_arr[10] = {1, 2, 3, 4, 5, 6};
    int odd_arr[10] = {1, 2, 3, 4, 5};

    swapAlternate(even_arr, 6);
    printArray(even_arr, 6);

    swapAlternate(odd_arr, 5);
    printArray(odd_arr, 5);

    return 0;
}