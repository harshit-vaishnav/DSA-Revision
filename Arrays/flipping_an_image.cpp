#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &img)
    {
        int m = img.size();
        int n = img[0].size();
        for (int i = 0; i < m; i++)
        {
            reverse(img[i].begin(), img[i].end());
            for (int j = 0; j < n; j++)
            {
                if (img[i][j] == 0)
                    img[i][j] = 1;
                else
                    img[i][j] = 0;
            }
        }
        return img;
    }
};