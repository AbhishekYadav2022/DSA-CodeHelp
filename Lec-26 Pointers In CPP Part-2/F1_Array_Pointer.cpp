#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 5, 7, 11, 21, 48};

    // Getting Address
    cout << "Address of arr is " << &arr[0] << endl;
    cout << "Address of arr is " << arr << endl;

    // Printing Values
    cout << "Value at 0th location: " << *arr << endl;
    cout << "Value at 1st location: " << *arr + 1 << endl;
    cout << "Value at 2nd location: " << *(arr + 2) << endl;
    cout << "Value at 3rd location: " << *(arr) + 3 << endl;

    for (int i = 0; i < 6; i++)
    {
        // cout << arr[i] << " "; // or

        // cout << i[arr] << " "; // Important

        cout << *(arr + i) << " ";
    }

    return 0;
}