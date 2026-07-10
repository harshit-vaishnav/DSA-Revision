#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxDepth(string s)
    {
        int min_ans = INT_MIN;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                cnt++;
            else if (s[i] == ')')
                cnt--;
            if (cnt > min_ans)
            {
                min_ans = cnt;
            }
        }
        return min_ans;
    }
};