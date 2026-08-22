#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isOneBitCharacter(vector<int> &bits)
    {
        //  1 0 1 1 0 1 1 1 1
        //  0 1 2 3 4 5 6 7 8

        int n = bits.size();
        int i = 0;

        while (i < n - 1)
        {
            if (bits[i] == 0)
                i++;
            else
                i += 2;
        }

        if (i == n - 1)
            return true;
        return false;
    }
};