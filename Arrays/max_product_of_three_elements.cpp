class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        int n1 = nums[n - 1];
        int n2 = nums[n - 2];
        int n3 = nums[n - 3];

        int no1 = 0, no2 = 0;

        if (nums[0] < 0 && nums[1] < 0)
        {
            no1 = nums[0];
            no2 = nums[1];
            return max(n1 * n2 * n3, no1 * no2 * n1);
        }
        else
            return n1 * n2 * n3;
    }
};