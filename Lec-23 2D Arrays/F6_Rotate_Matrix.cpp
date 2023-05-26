
#include <iostream>
#include <vector>

using namespace std;

// rotate matrix
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
{
    vector<vector<int>> new_matrix;

    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < col; i++)
    {
        for (int j = row; j >= 0; j--)
        {
            new_matrix[i][j] = matrix[j][i];
            cout << new_matrix[i][j] << " ";
        }
    }
    return new_matrix;
}

// print matrix
void printMatrix(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    cout << "Matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    /*
    Matrix:
    1 2 3
    4 5 6
    7 8 9

    Rotated Matrix:
    7 4 1
    8 5 2
    9 6 3

    Index:
    00 01 02
    10 11 12
    20 21 22

    Rotated:
    20 10 00
    21 11 01
    22 12 02
    */

    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printMatrix(matrix);

    // vector<vector<int>> new_matrix = rotateMatrix(matrix);
    rotateMatrix(matrix);

    // cout << "Rotated ";
    // printMatrix(rotateMatrix(matrix));
    return 0;
}