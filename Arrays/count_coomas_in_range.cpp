#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countCommas(int n)
    {

        int cnt = 0;
        for (int i = 1000; i <= 1e5 + 1; i++)
        {
            if (i > n)
                return cnt;
            cnt++;
        }
        return 0;
    }
};