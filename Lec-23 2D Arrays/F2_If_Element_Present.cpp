#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];

    // Taking input
    cout << "Enter 12 elements: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing elements
    cout << "Elements are written below" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Search
    int target;
    cout << "Enter the element: ";
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}
// 1 2 3 4 5 6 7 8 9 1 9 8 7 6 5 4