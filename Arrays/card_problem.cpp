#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool hasGroupsSizeX(vector<int> &deck)
    {
        int n = deck.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[deck[i]]++;
        }
        int gcdv = 0;
        for (auto &it : mpp)
        {
            gcdv = __gcd(gcdv, it.second);
        }
        return gcdv > 1;
    }
};