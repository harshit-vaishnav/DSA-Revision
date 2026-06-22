#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {

        //  approach dono elements check kar  equal h ya nahi
        // fir equal to h 1d array me sabhi elements lelo or watned r c banane ke liye 1d array se 2d aray bana do simple
        //     int row = mat.size();
        //     int col = mat[0].size();
        //     vector<int>ans;
        //     // not possible case when elements are not equal
        //     if(row * col != r * c)
        //     {
        //          return mat;
        //     }
        //     for(int i = 0; i < row; i++)
        //     {
        //          for(int j = 0; j < col; j++)
        //          {
        //              ans.push_back(mat[i][j]);
        //          }
        //     }
        //      vector<vector<int>>v(r,vector<int>(c));

        //    for(int i = 0; i < ans.size(); i++)
        //    {
        //          int row =  i / c;
        //         int col = i % c;
        //            v[row][col] = ans[i];
        //    }
        //     return v;
        vector<vector<int>> ans(r, vector<int>(c));
        int m = mat.size();
        int n = mat[0].size();
        if (m * n != r * c)
        {
            return mat;
        }
        for (int i = 0; i < m * n; i++)
        {
            int row1 = i / n;
            int col1 = i % n;
            int row = i / c;
            int col = i % c;
            ans[row][col] = mat[row1][col1];
        }
        return ans;
    }
};