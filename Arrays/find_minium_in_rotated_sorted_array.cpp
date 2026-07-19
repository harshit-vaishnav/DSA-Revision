#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        //  step-11 Brute Force
        int n = nums.size();
        //   int mini=INT_MAX;
        //   for(int i =0;i<nums.size();i++)
        //   {
        //     mini=min(nums[i],mini);
        //   }
        //    return mini;

        //  step-2 Optimal Solution

        //     int low=0,high=n-1;
        //     int MinE=INT_MAX;
        //     while(low<=high){
        //         int mid=(low+high)/2;
        //         MinE=min(MinE,nums[mid]);
        //         if(nums[mid]>=nums[high])
        //         {
        //             low=mid+1;
        //         }
        //         else
        //         {
        //             high=mid-1;
        //         }
        //     }
        //      return MinE;
        int low = 0, high = n - 1;
        int mini = INT_MAX;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            mini = min(nums[mid], mini);
            if (nums[mid] >= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return mini;
    }
};