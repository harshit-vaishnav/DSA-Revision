#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long maxSum(vector<int> &nums, int k, int mul)
    {
        int n = nums.size();
        long long maxSum = 0;
        sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 0; i < k; i++)
        {
            if (mul > 0)
            {
                long long multi = ((long long)nums[i] * (long long)mul);
                maxSum += multi;
            }
            else
            {
                long long multi = nums[i];
                maxSum += multi;
            }
            mul--;
        }
        return maxSum;
    }
};