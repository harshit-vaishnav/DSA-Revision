#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minLengthAfterRemovals(string s)
    {

        int n = s.size();

        int cntA = 0;
        int cntB = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                cntA++;
            else
                cntB++;
        }

        return n - (2 * (min(cntA, cntB)));
    }
};