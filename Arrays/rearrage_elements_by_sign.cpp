#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> Ans(n);
        int EvenIndex = 0, OddIndex = 1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                Ans[EvenIndex] = nums[i];
                EvenIndex = EvenIndex + 2;
            }
            else
            {
                Ans[OddIndex] = nums[i];
                OddIndex = OddIndex + 2;
            }
        }
        return Ans;
    }
};