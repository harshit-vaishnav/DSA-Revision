#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &nums)
    {
        int n = nums.size();
        int x0 = nums[0][0];
        int y0 = nums[0][1];
        int x1 = nums[1][0];
        int y1 = nums[1][1];
        int dx = x1 - x0;
        int dy = y1 - y0;
        for (int i = 2; i < n; i++)
        {
            int x = nums[i][0];
            int y = nums[i][1];
            if ((y - y0) * dx != (x - x0) * dy)
                return false;
        }
        return true;
    }
};