#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void set0(int row, int col, vector<vector<int>> &ans)
    {
        int m = ans.size();
        int n = ans[0].size();
        // set ith row to the zero
        for (int j = 0; j < n; j++)
        {
            ans[row][j] = 0;
        }
        // set jth col to the zero
        for (int i = 0; i < m; i++)
        {
            ans[i][col] = 0;
        }
    }
    void setZeroes(vector<vector<int>> &mat)
    {
        // int Rowsize=matrix.size();
        // int Colsize=matrix[0].size();
        // vector<vector<int>>ans=matrix;
        // for(int i=0;i<Rowsize;i++)
        // {
        //     for(int j=0;j<Colsize;j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //         //   step -1 set all the rows to the zeros
        //              for(int col=0;col<Colsize;col++)
        //              {
        //                 ans[i][col]=0;
        //              }
        //             // step-2 set all the cols to the zeros
        //             for(int row=0;row<Rowsize;row++)
        //             {
        //                 ans[row][j]=0;
        //             }
        //         }
        //     }
        // }
        //  matrix=ans;
        // int n=matrix.size();
        // int m=matrix[0].size();
        // vector<int>row(n,0);
        // vector<int>col(m,0);
        // for(int i =0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //              row[i]=1;
        //              col[j]=1;
        //         }
        //     }
        // }
        // for(int i =0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(row[i] || col[j])
        //         {
        //              matrix[i][j]=0;
        //         }
        //     }
        // }
        //   int n=matrix.size();
        //   int m=matrix[0].size();
        //         // row->>=matrix[n][0];
        //         // col->>= matrix[0][m];
        //         int col0=1;

        //         for(int i=0;i<n;i++)
        //         {
        //           for(int j=0;j<m;j++)
        //           {
        //              if(matrix[i][j]==0)
        //              {
        //                 // set rows to zero
        //                 matrix[i][0]=0;
        //                 // set cols to zero
        //                 if(j!=0)
        //                 {
        //                     matrix[0][j]=0;
        //                 }
        //                 else
        //                 {
        //                    col0=0;
        //                 }
        //              }
        //           }
        //         }
        //         // step-2 row tracker col tracker ko chod kar jo non 0 elements h unko mark karna
        //         for(int i=1;i<n;i++)
        //         {
        //             for(int j=1;j<m;j++)
        //             {
        //                 if(matrix[i][j]!=0)
        //                 {
        //                     if(matrix[i][0]==0 || matrix[0][j]==0)
        //                     {
        //                         matrix[i][j]=0;
        //                     }
        //                 }
        //             }
        //         }
        //         // step0-3 row traker and col tracker kozero karna

        //         if(matrix[0][0]==0)
        //         {
        //             for(int j=0;j<m;j++)
        //             {
        //                 matrix[0][j]=0;
        //             }
        //         }
        //         if(col0==0)
        //         {
        //             for(int i=0;i<n;i++)
        //             {
        //                 matrix[i][0]=0;
        //             }
        //         }
        ///..................../////
        //   vector<vector<int>>ans = mat;
        //   int m = mat.size();
        //   int n = mat[0].size();
        //   for(int i = 0; i < m; i++)
        //   {
        //      for(int j = 0; j < n; j++)
        //      {
        //          if(mat[i][j] == 0)
        //            set0(i,j,ans);
        //      }
        //   }
        //     mat = ans;

        //     }
        /////////.............
        int m = mat.size();
        int n = mat[0].size();
        vector<int> row(m, 1);
        vector<int> col(n, 1);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 0)
                {
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (row[i] == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    mat[i][j] = 0;
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (col[j] == 0)
            {
                for (int i = 0; i < m; i++)
                {
                    mat[i][j] = 0;
                }
            }
        }
    }
};