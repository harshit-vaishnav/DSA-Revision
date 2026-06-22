#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += mat[i][i];
            if (i != n - i - 1)
                sum += mat[i][n - i - 1];
        }
        return sum;
    }
};
