#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        // approach take 4 pointer 2 for row and 2 for col print then shrink 4 pointers
        // TC-O(N*M) SC-O(1)
        int m = matrix.size();
        int n = matrix[0].size();
        int Srow = 0;
        int Erow = m - 1;
        int Scol = 0;
        int Ecol = n - 1;
        vector<int> ans;
        while (Srow <= Erow && Scol <= Ecol)
        {
            // print1st row , to print row traverse in col
            for (int j = Scol; j <= Ecol; j++)
            {
                ans.push_back(matrix[Srow][j]);
            }
            Srow++;
            // print last col,to print col taverse in row
            for (int i = Srow; i <= Erow; i++)
            {
                ans.push_back(matrix[i][Ecol]);
            }
            Ecol--;
            // print last row, to print  row traverse in col
            if (Srow <= Erow)
            {
                for (int j = Ecol; j >= Scol; j--)
                {
                    ans.push_back(matrix[Erow][j]);
                }
                Erow--;
            }

            if (Scol <= Ecol)
            {
                // print 1st col, to print col traverse in row
                for (int i = Erow; i >= Srow; i--)
                {
                    ans.push_back(matrix[i][Scol]);
                }
                Scol++;
            }
        }
        return ans;
    }
};
