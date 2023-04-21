// Question: https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028
#include <iostream>
using namespace std;
int main()
{
    int size = 5, sum = 12;
    int arr[size] = {1, 2, 3, 4, 5};
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }

    return 0;
}