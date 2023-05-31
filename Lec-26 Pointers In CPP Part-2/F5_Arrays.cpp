#include <iostream>
using namespace std;

int getSum(int arr[], int n)
// int getSum(int *arr, int n) // Same // Function gets only pointer
{
    int sum = 0;

    cout << "Size: " << sizeof(arr) << endl;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    cout << "Sum: " << getSum(arr, 5) << endl;

    cout << "Sum: " << getSum(arr + 3, 3);

    return 0;
}