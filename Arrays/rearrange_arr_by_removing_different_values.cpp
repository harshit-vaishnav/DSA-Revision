class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {

        vector<int> ans;

        while (!nums.empty())
        {
            set<int> st;
            for (auto &it : nums)
                st.insert(it);

            for (auto &it : st)
            {
                ans.push_back(it);
                auto pos = find(nums.begin(), nums.end(), it);
                nums.erase(pos);
            }
        }

        return ans;
    }
};