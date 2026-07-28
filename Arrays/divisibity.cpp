#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkDivisibility(int n)
    {
        string num = to_string(n);
        int size = num.size();
        int sum = 0;
        long long mul = 1;
        for (int i = 0; i < size; i++)
        {
            int digit = num[i] - '0';
            sum += digit;
            mul *= digit;
        }
        long long totalS = sum + mul;
        if (n % totalS == 0)
            return true;
        return false;
    }
};