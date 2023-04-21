#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[12] = {1, 10, 2, 3, 5, 10, 4, 6, 7, 8, 9, 11};
    cout << "Duplicate Number: " << findDuplicate(arr, 12);
    return 0;
}