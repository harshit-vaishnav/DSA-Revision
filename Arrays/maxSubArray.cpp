// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
// // Brute Force  TC-O(N^2) SC-O(1);
// // approach genrate all subarray with sum and comapre with maxSum and return maxSum
// //  int n = nums.size();
// //  int maxSum = INT_MIN;
// //  for(int i = 0; i < n; i++)
// //  {
// //      int sum = 0;
// //       for(int j = i; j < n ; j++)
// //       {
// //          sum += nums[j];
// //          maxSum = max(maxSum,sum);
// //       }
// //  }
// //  return maxSum;

//  /* optimal solution TC-O(N) SC-O(1) kadane's algo
// inution  dek agr array [-2,4] hua to total sum 2 aata or sirf 4 lete to sum
// 4 aata yani agar koi abhi tak ka sum negative aya h or future me koi postive aya to vo negative sum
// us positive ki value kha jayega isse acha h vo nhi khaye to negative ko sum ko 0 set karo jisse
// future me 0+original number aye or value bachii rahe */
//  int n = nums.size();
//  int sum = 0;
//  int maxSum = INT_MIN;
//  for(int i = 0; i < n; i++)
//  {
//       sum += nums[i];
//       maxSum = max(sum,maxSum);
//       if(sum < 0)
//       {
//          sum = 0;
//       }
//  }
//   return maxSum;
//     }
// };