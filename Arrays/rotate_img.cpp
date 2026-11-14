class Solution
{
public:
    void rotate(vector<vector<int>> &mat)
    {
        int n = mat.size();

        // tranpose of a matrix;

        for (int row = 0; row < n; row++)
        {
            for (int col = row + 1; col < n; col++)
            {
                swap(mat[row][col], mat[col][row]);
            }
        }

        for (int row = 0; row < n; row++)
        {
            reverse(mat[row].begin(), mat[row].end());
        }
    }
};