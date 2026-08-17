#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        //   step-1 Brute Force
        //   for(int i=0;i<nums.size();i++)
        //   {
        //     if(nums[i]==target) return i;
        //   }
        //    return -1;

        int n = nums.size();

        int low = 0, high = n - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return mid;
            else if (target > nums[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};