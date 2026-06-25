#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isTarget(vector<int> &row, int target)
    {
        int low = 0;
        int high = row.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (target == row[mid])
                return true;
            else if (target > row[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>> &mat, int target)
    {
        // Brute Force TC-O(M * N) SC - O(1)
        // approach puri matrix me traverse kiya har element ko check kiya kya tum target ke equal ho agar equal ho to return true varna puri matrix traverse karne ke baad bhi nhi mila to return false
        //    int m = mat.size();
        //    int n = mat[0].size();
        //    for(int i = 0; i < m; i++)
        //    {
        //      for(int j  = 0; j < n; j++)
        //      {
        //          if(mat[i][j] == target)
        //          {
        //              return true;
        //          }
        //      }
        //    }
        //     return false;

        // Better TC-O(M * LOGN) SC - O(1)
        // approach dek har row sorted h to me kyu na har row ke binary search laga do har row me jau or row ke liye binary search laga du or check kar lu kya vo prsent h ya nah
        //     int m = mat.size();
        //    int n = mat[0].size();
        //    for(int i = 0; i < m; i++)
        //    {
        //       if(isTarget(mat[i],target)) return true;
        //    }
        //     return false;
        // }
        // Optimal TC-O(N+M) SC - O(1)
        // approach take 2 pointer row and col initinally point to the last element of the 1st
        // row ab puri row sorted h or pura col sorted h last wala agr target bada aya yani
        // uss row me to nhi ho skta to next row me check karlo to row++ ab agar target chota aya to us pure col me nhiho skta kyunki col to sorted h na to col-- kar do ese hi check karo har bar jaha mil jaye return true kar do
        int m = mat.size();
        int n = mat[0].size();
        int row = 0;
        int col = n - 1;
        while (row < m && col >= 0)
        {
            if (mat[row][col] == target)
                return true;
            else if (target > mat[row][col])
                row++;
            else
                col--;
        }
        return false;
    }
};