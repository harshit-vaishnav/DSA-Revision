#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        string s = to_string(n);
        long long pro = 1;
        long long sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int digit = s[i] - '0';
            pro *= digit;
            sum += digit;
        }
        return pro - sum;
    }
};