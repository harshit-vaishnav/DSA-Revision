class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int minK, int maxK)
    {
        long long ans = 0;
        long long cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= minK && nums[i] <= maxK)
            {
                cnt++;
            }
            else
            {

                ans += ((1LL * cnt * (cnt + 1)) / 2);
                cnt = 0;
            }
        }
        if (cnt != 0)
            ans += ((1LL * cnt * (cnt + 1)) / 2);
        return ans;
    }
};