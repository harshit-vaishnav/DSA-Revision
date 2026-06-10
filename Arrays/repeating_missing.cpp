// problem - Find Missing and Repeated Values (leetocode - 2965)
// https://leetcode.com/problems/find-missing-and-repeated-values/description/
// class Solution {
// public:
//     vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
//         // tc -O(2*(n^2) sc -O(n+m)
//     // approach convert 2d grid into 1d array then by nested loop count freq
// //         int n = grid.size();
// //         int m = grid[0].size();
// //          vector<int>v;
// //         for(int i =0; i<n; i++)
// //         {
// //             for(int j = 0; j<m;j++)
// //             {
// //              v.push_back(grid[i][j]);
// //             }
// //         }
// //          int missing;
// //          int repeating;
// //    for(int j =1; j<=v.size(); j++)
// //    {
// //     int cnt = 0;
// //      for(int i = 0; i<v.size(); i++)
// //      {
// //        if(v[i] == j) cnt++;
// //      }
// //         if(cnt == 2) repeating = j;
// //         if(cnt == 0) missing = j;
// //       }
// //       return {repeating,missing};


// //  approach 2
// // using sum and sumsqare equations 
// // tc-O(n^2) sc-o(1)

//   int n = grid.size();
//      int m = grid[0].size();
//         long long  actualsum= 0;
//          long long actualsqaresum = 0;
//         for(int i =0; i<n; i++)
//         {
//             for(int j = 0; j<m;j++)
//             {
//               actualsum+=grid[i][j];
//               actualsqaresum = actualsqaresum + (grid[i][j] * grid[i][j]);
//             }
//         }
//         int size = n*n;
//          long long  expectedsum = (size*(size+1))/2;
//          long long expectedsqaresum =( (expectedsum * 2 ) * (2* size +1))/6;
//          long long val1 = actualsum - expectedsum;
//          long long val2 = actualsqaresum - expectedsqaresum;
//          val2 = val2 / val1;
//           int missing = (val1+val2) / 2;
//           int repeating = missing - val1;
//           return {(int)missing ,(int)repeating};


    
        
//     }
// };
