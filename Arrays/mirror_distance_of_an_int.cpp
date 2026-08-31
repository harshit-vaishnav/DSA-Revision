#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mirrorDistance(int n)
    {
        string s = to_string(n);
        string ans = " ";
        for (int i = s.size() - 1; i >= 0; i--)
        {
            ans.push_back(s[i]);
        }

        return abs(n - stoi(ans));
    }
};