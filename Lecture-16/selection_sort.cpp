// Selection Sort
#include <iostream>
using namespace std;

// Function for sorting
void sortArray(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                swap(arr[j], arr[min]);
            }
        }
    }
}

// Function for printing
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 5;
    int arr[n] = {11, 54, 32, 86, 7};
    sortArray(arr, n);

    printArray(arr, n);
    return 0;
}