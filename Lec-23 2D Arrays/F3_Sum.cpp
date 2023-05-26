#include <iostream>
using namespace std;

// For printing row wise sum
void printRowSum(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

// For printing col wise sum
void printColSum(int arr[][4], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

void greatestRowSum(int arr[][4], int row, int col)
{
    int max = INT16_MIN;
    int rowIndex = -1;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max)
        {
            max = sum;
            rowIndex = i;
        }
    }
    cout << "Maximum row index: " << rowIndex << endl;
    cout << "Max index: " << max << endl;
}

int main()
{
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

    // Row-wise sum
    cout << "Row wise sum ->" << endl;
    printRowSum(arr, 4, 4);

    // Column-wise sum
    cout << "Column wise sum ->" << endl;
    printColSum(arr, 4, 4);
    cout << endl;

    greatestRowSum(arr, 4, 4);

    return 0;
}