#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool uniformArray(vector<int> &nums1)
    {
        int n = nums1.size();
        int Min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            Min = min(Min, nums1[i]);
        }
        if (Min % 2 != 0)
            return true;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (nums1[i] % 2 != 0)
                    return false;
            }
        }
        return true;
    }
};