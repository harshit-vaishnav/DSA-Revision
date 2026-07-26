#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> GenerateRow(int Row)
    {
        vector<int> row;
        long long ans = 1;
        row.push_back(1);
        for (int col = 1; col < Row; col++)
        {
            ans = ans * (Row - col);
            ans = ans / col;
            row.push_back(ans);
        }
        return row;
    }
    vector<vector<int>> generate(int numRows)
    {
        //             vector<vector<int>> ans;

        //     for (int i = 0; i < numRows; i++) {
        //         vector<int> row(i + 1, 1); // sab elements 1

        //         for (int j = 1; j < i; j++) {
        //             row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
        //         }

        //         ans.push_back(row);
        //     }

        //     return ans;
        // }
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++)
        {
            ans.push_back(GenerateRow(i + 1));
        }
        return ans;
    }
};