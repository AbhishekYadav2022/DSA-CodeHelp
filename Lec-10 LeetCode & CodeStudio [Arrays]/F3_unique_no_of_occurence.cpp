#include <iostream>
using namespace std;

int main()
{
    int size = 11, ans = 1;
    int arr[size] = {1, 2, 1, 2, 2, 3, 5, 4, 3, 5, 4};
    // int arr[size] = {1, 2, 3, 4, 5};
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (arr[i] == arr[j])
            {
                // cout << arr[j];
                ans = 0;
            }
        }
    }

    if (ans == 0)
    {
        cout << "Ans: false";
    }
    else
    {
        cout << "Ans: true";
    }

    return 0;
}