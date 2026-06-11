// problem - power x n (pow(x,n))
// leetcode -https://leetcode.com/problems/powx-n/
// class Solution {
// public:
// double solve(double x, long long n)
// {
//    if(n == 0) return 1;
//    if(n < 0)
//    {
//      x = 1/x;
//      n = -n;
//    }
//     double half = solve(x,n/2);
//      double result = half * half;
//      if(n & 1 == 1) // odd
//      {
//          result *= x;
//      }
//       return result;
// }
//     double myPow(double x, int n) {
//     // Brute Force TC-O(N) sc-O(1);
// //    double ans = 1.0;
// //    long long N = n;
// //          N  = abs(N);
// //     for(long long i = 1; i <=N; i++)
// //     {
// //          ans = x * ans;
// //     }
// //      if(n < 0)
// //      {
// //          ans = 1.0/ans;
// //      }
// //        return ans;

// //   optimal TC-O(log n)
// // approach using recursion + backtracking 
// //   x^n can be reduced to half power x^n/2
// //   for example 2^8 = 2^4 * 2^4
// //   so calculate half half power then multiply so we do half half means log n compleixty
//             long long N =n;
//             return solve(x,N);
//     }
// };
