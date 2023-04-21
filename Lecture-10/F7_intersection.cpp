// Question: https://www.codingninjas.com/codestudio/problems/intersection-of-2_arrays_1082149
#include <iostream>
using namespace std;

void findIntersection(int arr1[], int arr2[], int count1, int count2)
{
    for (int i = 0; i < count1; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < count2; j++)
        {
            if (arr1[i] < element)
            {
                break;
            }
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
}

int main()
{
    int arr1[8] = {1, 2, 3, 4, 11, 12, 29, 13};
    int arr2[5] = {1, 2, 3, 11, 13};

    cout << "Intersection: ";
    findIntersection(arr1, arr2, 8, 5);
    return 0;
}