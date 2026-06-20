#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();

        int MaxL = INT_MIN;
        if (n == 0 || n == 1)
            return n;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            unordered_set<char> st;
            for (int j = i; j < n; j++)
            {
                char ch = s[j];
                if (st.find(ch) == st.end())
                {
                    st.insert(ch);
                    cnt++;
                }
                else
                {
                    st.insert(ch);
                    MaxL = max(cnt, MaxL);
                    cnt = 1;
                    break;
                }
            }
            MaxL = max(cnt, MaxL);
        }
        return MaxL;
    }
};