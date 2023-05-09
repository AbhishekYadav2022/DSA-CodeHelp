#include <iostream>
using namespace std;

/*
[Step 1]: [11, 76, 54, 13, 95, 21]
    temp = 76
[Step 2]: [11, 76, 54, 13, 95, 21]
    temp = 76
    [Step i]:   [11, 76, 54, 13, 95, 21]
    [Step ii]:  [11, 54, 54, 13, 95, 21]
    [Step iii]: [11, 54, 76, 13, 95, 21]
[Step 3]: [11, 54, 76, 13, 95, 21]
    temp = 76
    [Step i]:   [11, 54, 76, 13, 95, 21]
    [Step ii]:  [11, 54, 54, 76, 95, 21]
    [Step iii]: [11, 54, 76, 13, 95, 21]
[Step 4]: [11, 54, 76, 13, 95, 21]
    temp = 13
    [Step i]:   [11, 54, 76, 13, 95, 21]
    [Step ii]:  [11, 54, 54, 76, 95, 21]
    [Step iii]: [11, 13, 54, 76, 95, 21]
[Step 5]: [11, 13, 54, 76, 95, 21]
    temp = 95
    [Step i]:   [11, 13, 54, 76, 95, 21]
    [Step ii]:  [11, 13, 54, 76, 95, 21]
[Step 6]: [11, 13, 54, 76, 95, 21]
    temp = 21
    [Step i]:   [11, 13, 54, 76, 95, 95]
    [Step ii]:  [11, 13, 54, 76, 76, 95]
    [Step ii]:  [11, 13, 54, 54, 76, 95]
    [Step ii]:  [11, 13, 13, 54, 76, 95]
    [Step ii]:  [11, 13, 21, 54, 76, 95]
*/

// Insertion Sort
void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

// Print Array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {11, 76, 54, 13, 95, 21};

    insertionSort(arr, 6);

    printArray(arr, 6);

    return 0;
}