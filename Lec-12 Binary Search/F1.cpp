#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

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

int main()
{
    int oddArr[5] = {3, 5, 9, 13, 27};
    int evenArr[6] = {2, 3, 5, 9, 13, 27};

    int index = binarySearch(oddArr, 5, 9);
    cout << "Index: " << index << endl;

    index = binarySearch(evenArr, 6, 28);
    cout << "Index: " << index << endl;

    return 0;
}