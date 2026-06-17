#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target)
    {
        // Brute Force TC-O(N^2) SC -O(1);
        // approach puri matrix me traverse kar lo or check kar lo target element  peresent h ya nhi
        // agar h to return true else return false
        // int n = mat.size();
        // int m = mat[0].size();
        // for(int i = 0; i < n; i++)
        // {
        //      for(int j = 0; j < m; j++)
        //      {

        //         if(mat[i][j] == target) return true;
        //      }
        // }
        //   return false;

        // Better kyunki har row sorted h to har row ke liye binary search laga dege
        //  TC-O(n * log m) SC-O(1)
        //  int n = mat.size();
        //  int m = mat[0].size();
        //  for(int i = 0; i < n; i++)
        //  {
        //     int low = 0;
        //     int high = m - 1;
        //     while(low <= high)
        //     {
        //         int mid = low + (high - low) / 2;
        //         if(mat[i][mid] == target)
        //         {
        //            return true;
        //         }
        //         else if(target > mat[i][mid])
        //         {
        //              low = mid + 1;
        //         }
        //         else
        //         {
        //              high = mid - 1;
        //         }
        //     }

        //  }
        //   return false;

        // optimal TC-O(log (n * m)) SC - O(1)
        //  puri grid me binary search laga do or row or col nikale ke liye formula use karo
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = (n * m) - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2; // convert mid index to coridante i,j
            int row = mid / m;
            int col = mid % m;
            if (mat[row][col] == target)
            {
                return true;
            }
            else if (target > mat[row][col])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return false;
    }
};