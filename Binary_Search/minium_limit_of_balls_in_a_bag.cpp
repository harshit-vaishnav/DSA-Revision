#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int CountOp(vector<int> &nums, int mid, int Op)
    {
        int op = 0;
        for (auto &it : nums)
        {
            op += (it - 1) / mid;
            if (op > Op)
                return op;
        }
        return op;
    }
    int minimumSize(vector<int> &nums, int Op)
    {

        int n = nums.size();

        int low = 1, high = *max_element(nums.begin(), nums.end());

        while (low < high)
        {
            int mid = low + (high - low) / 2;

            int operations = CountOp(nums, mid, Op);

            if (operations <= Op)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};