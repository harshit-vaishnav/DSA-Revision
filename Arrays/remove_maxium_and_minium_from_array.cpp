#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumDeletions(vector<int> &nums)
    {

        int n = nums.size();

        int MinI = -1, MaxI = -1;
        int Maxi = INT_MIN, Mini = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > Maxi)
            {
                Maxi = nums[i];
                MaxI = i;
            }
            if (Mini > nums[i])
            {
                Mini = nums[i];
                MinI = i;
            }
        }

        //  case 1 front se remove karu

        int ans = n;
        int TotalOp = 0;
        TotalOp += max(MaxI, MinI) + 1;
        ans = min(ans, TotalOp);

        // case 2 back se remove karu

        TotalOp = 0;
        TotalOp += n - min(MaxI, MinI);
        ans = min(ans, TotalOp);

        // case 3 front se delte ya fir back se delete

        TotalOp = 0;
        // case 3.1 maxium element front se kiya small element back se kiya
        TotalOp += MaxI + 1;
        TotalOp += n - MinI;
        ans = min(ans, TotalOp);
        // case 3.2 maxium element back se remove kiya and small element back se remove kiya

        TotalOp = 0;

        TotalOp += MinI + 1;
        TotalOp += n - MaxI;
        ans = min(ans, TotalOp);

        return ans;
    }
};