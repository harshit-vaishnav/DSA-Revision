#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countElements(vector<int> &nums, int k)
    {

        //  Brute Force
        int ans = 0;
        int n = nums.size();
        // for(int i = 0; i < n; i++)
        // {
        //      int cnt = 0;
        //      for(int j = 0; j < n; j++)
        //      {
        //          if(nums[j] > nums[i]) cnt++;
        //      }
        //      if(cnt >= k) ans++;
        // }
        //  return ans;

        // better

        sort(nums.begin(), nums.end());
        if (k == 0)
            return n;

        for (int i = 0; i < n; i++)
        {
            int GreaterValue = n - (upper_bound(nums.begin(), nums.end(), nums[i]) - nums.begin());

            if (GreaterValue >= k)
                ans++;
        }
        return ans;
    }
};