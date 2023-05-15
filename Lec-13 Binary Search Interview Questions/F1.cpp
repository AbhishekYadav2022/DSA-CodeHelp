// Question: https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

// First and Last Position of an Element In Sorted Array
#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > mid)
        {
            start = mid + 1;
        }
        else if (key < mid)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[7] = {1, 2, 2, 2, 4, 5, 5};

    cout << "First occurence of 2 is at index: " << firstOcc(arr, 7, 2) << endl;

    cout << "Last occurence of 2 is at index: " << lastOcc(arr, 7, 2) << endl;

    // Making pair
    // pair<int, int> p;
    // p.first = firstOcc(arr, 7, 2);
    // p.second = lastOcc(arr, 7, 2);

    // cout << p.first << endl;
    // cout << p.second << endl;

    cout << "Number of occurence of 2 is: " << lastOcc(arr, 7, 2) - firstOcc(arr, 7, 2) + 1 << endl;

    return 0;
}