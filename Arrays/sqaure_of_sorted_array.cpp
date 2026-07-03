#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // -12 - 4 -2 9 10
    vector<int> sortedSquares(vector<int> &nums)
    {
        // approach 1
        // vector<int>ans;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //      ans.push_back(nums[i] * nums[i]);
        // }
        //  sort(ans.begin(),ans.end());
        //   return ans;

        int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n - 1;
        int idx = n - 1;
        while (left <= right)
        {
            if (abs(nums[left]) > abs(nums[right]))
            {
                ans[idx] = nums[left] * nums[left];
                left++;
            }
            else
            {
                ans[idx] = nums[right] * nums[right];
                right--;
            }
            idx--;
        }
        return ans;
    }
};