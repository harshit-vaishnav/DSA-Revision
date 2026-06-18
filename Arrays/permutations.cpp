#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //  TC-O(N! * N) SC-O(N!) + O(N) +O(N)
    // approach dek me ek element ko lu fir aage explore kar lu but jese mene
    // 1 ko liya ok 2 ko liya to 2 fir 3 le pauga 1 nhi le pauga to muje bar bar reset karna hoga islie me loop laga deta hu ab isme index ka koi role hi nhi h kyunki muje bar bar 0 index se lena h but isme set lena padega kyunki me temp me tabhi us element ko push ka pauga jab vo uniquq ho 1 ke bad 1 nhi le skta
    vector<vector<int>> ans;
    unordered_set<int> st;
    void solve(vector<int> &temp, vector<int> &nums)
    {
        if (temp.size() == nums.size())
        {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (st.find(nums[i]) == st.end())
            {
                temp.push_back(nums[i]);
                st.insert(nums[i]);
                solve(temp, nums);
                temp.pop_back();
                st.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<int> temp;
        solve(temp, nums);
        return ans;
    }
};