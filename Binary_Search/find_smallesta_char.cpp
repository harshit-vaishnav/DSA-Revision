#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    char nextGreatestLetter(vector<char> &s, char target)
    {
        int n = s.size();
        int low = 0, high = n - 1;
        char ans = s[0];
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (s[mid] > target)
            {
                ans = s[mid];
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};