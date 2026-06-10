// problem - majority_element (leetcode -163)
//https://leetcode.com/problems/majority-element/
//class Solution {
//public:
    //int majorityElement(vector<int>& nums) {
    //  approach 1 using hashmap
    // int n = nums.size();
    // int freq = n / 2;
    // unordered_map<int,int>mpp;
    // for(auto &it:nums)
    // {
    //     mpp[it]++;
    // }
    // for(auto & it : mpp)
    // {
    //     if(it.second > freq) return it.first;
    // }
    //  return -1;

    //  optimal solution using morre voting algo
     // tc - o(n) sc -(1)
    //  int pw = 1;
    //   int ans = nums[0];
    //   for(int i = 1; i < nums.size(); i++)
    //   {
    //      if(pw == 0) 
    //      {
    //         ans = nums[i];
    //          pw = 1;
    //      }
    //       else if(nums[i] == ans) pw++;
    //       else pw--;
    //   }
    //   return ans;
        
   // }
//};