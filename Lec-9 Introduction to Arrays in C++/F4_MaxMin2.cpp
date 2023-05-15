// Finding maximum and minimun numbers using predefined functions
// Finding maximum and minimun values
#include <iostream>
using namespace std;

// function to get maximum element
int getMax(int nums[], int size)
{
    int max_num = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        max_num = max(max_num, nums[i]);
    }

    // returning max value
    return max_num;
}

// function to get minumum element
int getMin(int nums[], int size)
{
    int min_num = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        min_num = min(min_num, nums[i]);
    }

    // returning min value
    return min_num;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int num[100];
    cout << "Enter " << size << " elements: ";

    // Taking elements
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    // Printing minimum and maximum elements
    cout << "Minimum: " << getMin(num, size) << endl;
    cout << "Maximum: " << getMax(num, size) << endl;
    return 0;
}