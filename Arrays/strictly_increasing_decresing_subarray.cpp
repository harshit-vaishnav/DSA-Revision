class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        int maxlen = 1;
        int n = nums.size();
        int j = 0;

        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] < nums[i])
            {
                maxlen = max(maxlen, i - j + 1);
            }
            else
            {
                j = i;
            }
        }
        j = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] > nums[i])
            {
                maxlen = max(maxlen, i - j + 1);
            }
            else
                j = i;
        }
        return maxlen;
    }
};