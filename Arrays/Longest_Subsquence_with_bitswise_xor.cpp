#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestSubsequence(vector<int> &nums)
    {
        int n = nums.size();
        int x = 0;
        bool allZero = true;

        for (int i = 0; i < n; i++)
        {
            x ^= nums[i];
            if (nums[i] != 0)
                allZero = false;
        }

        if (allZero)
            return 0;
        if (x != 0)
            return n;
        else
            return n - 1;
    }
};