// Print Like A Wave
#include <iostream>
using namespace std;

void printWave(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main()
{
    /*  1 2 3
        5 6 7
        Order: 00 10 11 01 02 12
    */

    int arr[4][4];

    // Taking input
    cout << "Enter 16 elements: ";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing elements
    cout << "Elements are written below" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Printing elements like wave
    cout << "Wave: ";
    printWave(arr, 4, 4);

    return 0;
}
/*

-8 -1 0 7 -7 -2 1 6 -6 -3 2 5 -5 -4 3 4

*/ 