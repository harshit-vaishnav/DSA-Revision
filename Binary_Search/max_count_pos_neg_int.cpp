#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        // int n = nums.size();
        //    int pos = 0, neg = 0;
        // for(int i = 0; i < n; i++)
        // {
        //      if(nums[i] < 0) neg++;
        //      else if(nums[i] > 0) pos++;
        // }
        //  return max(pos,neg);

        int n = nums.size();
        int low = 0, high = n - 1;

        /// Find last ocuurenace of negative by index
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] < 0)
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        int neg = low; // always low + 1 hoga neg

        // find postive integears
        low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] > 0)
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        int pos = n - low;
        return max(pos, neg);
    }
};