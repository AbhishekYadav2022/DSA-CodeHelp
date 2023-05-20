// Rotate an array
#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

void rotateArray(vector<int> nums, int p)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + p) % nums.size()] = nums[i];
    }

    // copy temp into nums vector
    nums = temp;
    printArray(nums);
}

int main()
{
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);

    printArray(nums);

    rotateArray(nums, 3);

    return 0;
}