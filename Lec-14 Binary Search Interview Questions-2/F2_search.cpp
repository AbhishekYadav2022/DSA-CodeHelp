// Search in rotated sorted array
// Problem: https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554
#include <iostream>
using namespace std;

// Get Pivot Function
int getPivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

// Search Function
int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;

    int mid = start + (end - start) / 2; //--> Important

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        // go to left part
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2; //--> Important
    }
    return -1;
}

// Find Position Function
int findPosition(int arr[], int size, int key)
{
    int pivot = getPivot(arr, size);
    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        // BS of first line 
        return binarySearch(arr, pivot, size - 1, key);
    }
    else
    {
        // BS on second line 
        return binarySearch(arr, 0, pivot - 1, key);
    }
}

int main()
{
    int arr[7] = {3, 6, 9, 13, 0, 1, 2};
    cout << findPosition(arr, 7, 0);

    return 0;
}