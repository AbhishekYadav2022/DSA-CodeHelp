// Question : https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055
#include <iostream>
using namespace std;

// for printing array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// for sorting array
void sortOne(int arr[], int size)
{
    int left = 0, right = size - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main()
{

    int size = 18;
    int arr[size] = {1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1};

    printArray(arr, size);

    sortOne(arr, size);
    printArray(arr, size);

    return 0;
}