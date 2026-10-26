class Solution
{
public:
    int calculateScore(int a, int b)
    {

        int acnt = 0;
        int bcnt = 0;

        while (a > 0 || b > 0)
        {
            acnt += (a & 1);
            bcnt += (b & 1);
            b = b >> 1;
            a = a >> 1;
        }

        int ans = (acnt >= bcnt) ? acnt * bcnt : bcnt / acnt;
        return ans;
    }
};