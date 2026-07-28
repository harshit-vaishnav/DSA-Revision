#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        //    step-1 Brute Force
        // vector<int>temp(k);
        // for(int i=n-k;i<n;i++)
        // {
        //     temp[i-(n-k)]=nums[i];
        // }
        // for(int i=n-k-1;i>=0;i--)
        // {
        //     nums[k+i]=nums[i];
        // }
        //  for(int i=0;i<k;i++)
        //  {
        //     nums[i]=temp[i];
        //  }
        // step -2 Optimal
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};