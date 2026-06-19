#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &nums)
    {
        /*appproach
        dek array sort kar de  sort karne se kya hoga ki  jisse range nikalne me aassni ho
        dusra assume kar le ki first vala hi array h to use ans me dal de
        ab when to merge
        1.jab ans ka element 1 index vala bada hoga next vale se
        to ab usko update kar le firnhi to push kar de or k ko bandha aage */

        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int index = 0;
        ans.push_back({nums[0][0], nums[0][1]});
        for (int i = 1; i < n; i++)
        {
            if (ans[index][1] >= nums[i][0]) // fix h merge hoga
            {
                ans[index][1] = max(ans[index][1], nums[i][1]);
            }
            else
            {
                ans.push_back({nums[i][0], nums[i][1]});
                index++;
            }
        }
        return ans;
    }
};