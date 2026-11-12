class Solution
{
public:
    int countPairs(vector<int> &nums, int target)
    {
        int n = nums.size();
        int i = 0, j = n - 1;
        int cnt = 0;
        sort(begin(nums), end(nums));

        while (i < j)
        {
            int sum = nums[i] + nums[j];

            if (sum < target)
            {
                cnt += (j - i);
                i++;
            }
            else
            {
                j--;
            }
        }
        return cnt;
    }
};