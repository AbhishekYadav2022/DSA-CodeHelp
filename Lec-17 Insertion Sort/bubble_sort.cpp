// Bubble Sort

#include <iostream>
using namespace std;

// Function for sorting
void sortArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
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
    int n = 6;
    int arr[6] = {40, 22, 95, 21, 11, 50};

    sortArray(arr, n);

    printArray(arr, n);
    return 0;
}