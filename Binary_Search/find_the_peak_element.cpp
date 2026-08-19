#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        // int n=nums.size();
        // int MaxE=INT_MIN;
        // int AnsIndex=-1;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]>MaxE)
        //     {
        //         MaxE=nums[i];
        //         AnsIndex=i;
        //     }
        // }
        //  return AnsIndex;

        // //  step-2 Optimal
        //  int n=nums.size();
        //  if(n==1) return 0;
        //   if(nums[0]>nums[1]) return 0;
        //   if(nums[n-1]>nums[n-2]) return n-1;
        //   int low=1,high=n-2;
        //   while(low<=high)
        //   {
        //     int mid=(low+high)/2;
        //     if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
        //     {
        //          return mid;
        //     }
        //     else if(nums[mid]<nums[mid+1])
        //     {
        //         low=mid+1;
        //     }
        //     else
        //     {
        //         high=mid-1;
        //     }
        //   }

        //   return -1;

        //   More Optimal Code by modified Binary Search
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low < high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] < nums[mid + 1])
            {
                low = mid + 1;
            }
            else
                high = mid;
        }
        return low;
    }
};