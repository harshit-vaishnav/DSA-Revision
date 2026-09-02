#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int distributeCandies(vector<int> &nums)
    {

        int n = nums.size();

        unordered_set<int> st;

        for (int i = 0; i < n; i++)
        {
            st.insert(nums[i]);
        }

        return (st.size() >= n / 2) ? n / 2 : st.size();
    }
};