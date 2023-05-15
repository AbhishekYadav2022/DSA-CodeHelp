// Question: https://leetcode.com/problems/peak-index-in-a-mountain-array/
// Peak Index In a Mountain Array
#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size)
{
    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s < e)
    {
        {
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
    }
    return s;
}

int main()
{
    int arr[11] = {1, 2, 3, 7, 9, 14, 54, 44, 31, 20, 9};

    cout << "Peak index: " << peakIndexInMountainArray(arr, 13) << endl;
    return 0;
}

/*
Finding index of peak element in an array of integers
             15
           11/\11
           9/  \7
          7/    \5
         4/      \3
        2/
*/