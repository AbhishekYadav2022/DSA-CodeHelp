// Check if Array is Sorted and Rotated
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int> nums)
{
    int count = 0;
    int n = nums.size();

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }
    // 1
    if (nums[n - 1] > nums[0])
    {
        count++;
    }

    return count == 1;
}

int main()
{
    vector<int> nums;

    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    cout << check(nums) << endl;
    return 0;
}