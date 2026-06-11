//leetcode - Single Number (136)
//https://leetcode.com/problems/single-number/
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
// //    brute force  TC -o(n^2) SC - o(1) using nested loops
//     //   int n = nums.size();
//     //   for(int i = 0; i < n; i++)
//     //   {
//     //      int element = nums[i];
//     //      int cnt = 0;
//     //     for(int j = 0; j < n; j++)
//     //     {
//     //        if(element == nums[j]) cnt++;
//     //        if(cnt == 2) break;
//     //     }
//     //      if(cnt == 1)
//     //      {
//     //          return element;
//     //      }
//     //   }
//     //    return -1;

// // better tc - o(2*n) sc - o(n) using hashmap
// //  approach store all freq by hashmap and then traverse in hasmap and return a elemnt with 1 freq

// //   unordered_map<int,int>mpp;
// //    int n = nums.size();
// //     for(int i = 0; i < n; i++)
// //     {
// //         mpp[nums[i]]++;
// //     }
// //     for(auto &it : mpp)
// //     {
// //          if(it.second == 1)
// //          {
// //              return it.first;
// //          }
// //     }
// //      return -1;
// // approach 3 tc - o(n) sc -o(1) using xor operator
//  int n = nums.size();
//   int ans = 0;
//     for(int i = 0; i < n; i++)
//     {
//        ans = nums[i] ^ ans;
//     }
//      return ans;
//     }
// };