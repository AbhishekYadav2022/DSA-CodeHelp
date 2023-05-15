#include <iostream>
using namespace std;

// Function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Printing DONE!" << endl;
}

int main()
{
    int nums[10];
    // Initilizing 0 to every element of array
    int nums2[10] = {0};
    // Setting the first element of the array to 1
    int nums3[10] = {1};
    // Setting some elements of the array
    int nums4[10] = {1, 2, 3, 4, 5};
    cout << "First Array: " << endl;
    printArray(nums, 10);
    cout << "Second Array: " << endl;
    printArray(nums2, 10);
    cout << "Third Array: " << endl;
    printArray(nums3, 10);
    cout << "Fourth Array: " << endl;
    printArray(nums4, 10);
    return 0;
}