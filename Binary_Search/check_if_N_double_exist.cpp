#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkIfExist(vector<int> &nums)
    {

        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++)
        {
            int target = nums[i] * 2;

            int low = 0, high = n - 1;

            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (i != mid && nums[mid] == target)
                    return true;
                else if (target > nums[mid])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return false;
    }
};