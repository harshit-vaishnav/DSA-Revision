#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int CalCulateTotalSum(vector<int> &nums, int MinS, int threshold)
    {
        int Totalsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int div = (nums[i] + MinS - 1) / MinS;
            Totalsum += div;
            if (Totalsum > threshold)
                return Totalsum;
        }
        return Totalsum;
    }
    // Orginal Function

    int smallestDivisor(vector<int> &nums, int threshold)
    {
        // step-1 Brute Force
        //    int n=nums.size();
        //    if(n>threshold) return -1;
        //    for(int MinS=1;MinS<=*max_element(nums.begin(),nums.end());MinS++)
        //    {
        //     int TotalSum=CalCulateTotalSum(nums,MinS,threshold);
        //     if(TotalSum<=threshold) return MinS;
        //    }
        //     return -1;
        // step-2 Opimal
        int low = 1, high = *max_element(nums.begin(), nums.end());
        if (nums.size() > threshold)
            return -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int TotalSum = CalCulateTotalSum(nums, mid, threshold);
            if (TotalSum <= threshold)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};