#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int Srow = 0;
        int Erow = n - 1;
        int Scol = 0;
        int Ecol = n - 1;
        int no = 1;
        vector<vector<int>> ans(n, vector<int>(n, 0));
        while (Srow <= Erow && Scol <= Ecol)
        {
            // print1st row , to print row traverse in col
            for (int j = Scol; j <= Ecol; j++)
            {
                ans[Srow][j] = no;
                no++;
            }
            Srow++;
            // print last col,to print col taverse in row
            for (int i = Srow; i <= Erow; i++)
            {
                ans[i][Ecol] = no;
                no++;
            }
            Ecol--;
            // print last row, to print  row traverse in col
            if (Srow <= Erow)
            {
                for (int j = Ecol; j >= Scol; j--)
                {
                    ans[Erow][j] = no;
                    no++;
                }
                Erow--;
            }

            if (Scol <= Ecol)
            {
                // print 1st col, to print col traverse in row
                for (int i = Erow; i >= Srow; i--)
                {
                    ans[i][Scol] = no;
                    no++;
                }
                Scol++;
            }
        }
        return ans;
    }
};