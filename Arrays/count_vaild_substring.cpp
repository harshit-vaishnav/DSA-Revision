class Solution
{
public:
    long long countValidSubstrings(string s)
    {

        int n = s.size();
        long long cnt = 0;
        int l = -1;

        for (int i = 0; i < n; i++)
        {
            if (i >= 2 && s[i - 2] == 'a' && s[i - 1] == 'b' && s[i] == 'c')
            {
                l = i - 2;
            }
            cnt += i - l;
        }
        return cnt;
    }
};