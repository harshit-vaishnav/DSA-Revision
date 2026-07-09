#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        unordered_map<char, int> mpp;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            mpp[s[i]]++;
        }
        int n1 = t.size();
        for (int i = 0; i < n1; i++)
        {
            if (mpp[t[i]] == 0)
                return t[i];
            mpp[t[i]]--;
        }
        return '/0';
    }
};