#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        //    method -1 using cpp stl     // next_permutation(nums.begin(),nums.end());

        //    method 2 TC-O (3 * N) sc-O(N)

        // // step-1 find the break point
        // int n=nums.size();
        // int BreakIndex=-1;
        // for(int i=n-2;i>=0;i--)
        // {
        //   if(nums[i+1]>nums[i])
        //   {
        //     BreakIndex=i;
        //     break;
        //   }
        // }
        // // if BreakIndex -1 h that means array in sorted order
        // if(BreakIndex==-1)
        // {
        //     reverse(nums.begin(),nums.end());
        //     return;
        // }
        // // step-2 after getting break point swapping with the minium element
        // for(int i=n-1;i>BreakIndex;i--)
        // {
        //     if(nums[i]>nums[BreakIndex])
        //     {
        //         swap(nums[i],nums[BreakIndex]);
        //         break;
        //     }
        // }
        // // step-3 reverse the element after the index
        // reverse(nums.begin()+BreakIndex+1,nums.end());
    }
};