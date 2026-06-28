#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int n = nums.size();
        // vector<int>p(n);
        // p[0]=nums[0];
        // for(int i = 1; i<nums.size();i++)
        // {
        //     p[i] = p[i-1]+nums[i];
        // }
        // for(int i = 0 ; i<nums.size();i++)
        // {
        //     int leftsum = (i==0) ? 0 : p[i-1];
        //     int rightsum = p[n-1]-p[i];
        //     if(leftsum == rightsum) return i;
        // }
        //  return -1;

        // Brute Force

        //     vector<int>prefixsum(n);
        //     vector<int>suffixsum(n);
        //       prefixsum[0] = 0;
        //       suffixsum[n - 1] = 0;
        //     for(int i = 1; i < n; i++)
        //     {
        //        prefixsum[i] = prefixsum[i - 1] + nums[i - 1];
        //     }
        //     for(int i = n - 2; i >= 0; i--)
        //     {
        //        suffixsum[i] = suffixsum[i + 1] + nums[i + 1];
        //     }
        //     for(int i = 0; i < n; i++)
        //     {
        //          int psum = prefixsum[i];
        //          int ssum = suffixsum[i];
        //          if(psum == ssum) return i;
        //     }
        //      return  -1;
        // }
        int Tsum = 0;
        for (int i = 0; i < n; i++)
        {
            Tsum += nums[i];
        }
        int Psum = 0;
        for (int i = 0; i < n; i++)
        {
            // if(i - 1 < 0) Psum = 0;
            // else Psum += nums[i - 1];
            int Ssum = Tsum - Psum - nums[i];
            if (Psum == Ssum)
                return i;
            Psum += nums[i];
        }
        return -1;
    }
};