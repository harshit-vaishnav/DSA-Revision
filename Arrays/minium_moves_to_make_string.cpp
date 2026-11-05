class Solution
{
public:
    int minimumMoves(string s)
    {
        int ans = 0;
        int n = s.size();
        int i = 0;

        while (i < n)
        {
            if (s[i] == 'X')
            {
                ans++;
                i += 3;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};
