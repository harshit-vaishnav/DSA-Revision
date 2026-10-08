class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        int n = arr.size();

        unordered_map<int, int> mpp;
        unordered_set<int> st;

        for (auto &it : arr)
            mpp[it]++;
        for (auto &it : mpp)
            st.insert(it.second);

        return mpp.size() == st.size();
    }
};