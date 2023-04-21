// Question: https://www.codingninjas.com/codestudio/problems/pair-sum_697295
#include <iostream>
using namespace std;
int main()
{
    int size = 5, sum = 0;
    int arr[size] = {2, -3, 3, 3, -2};
    cout << "Pairs: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }

    return 0;
}