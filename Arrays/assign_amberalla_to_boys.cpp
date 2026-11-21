class Solution
{
public:
    vector<string> assignUmbrella(vector<int> &rain)
    {

        int n = rain.size();
        vector<string> ans(n);
        int alice = 0, bob = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (rain[i] == 1 && rain[i + 1] == 1)
            {
                if (alice <= bob)
                {
                    ans[i] = "Alice";
                    alice++;
                }
                else
                {
                    ans[i] = "Bob";
                    bob++;
                }
            }
            else if (rain[i] == 1)
            {
                ans[i] = "Bob";
                bob++;
            }
            else
            {
                ans[i] = "None";
            }
        }

        if (rain[n - 1] == 1)
        {
            ans[n - 1] = "Bob";
        }
        else
        {
            ans[n - 1] = "None";
        }
        return ans;
    }
};