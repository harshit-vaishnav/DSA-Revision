class Solution
{
public:
    int FindDominant(vector<int> &nums)
    {
        int n = nums.size();
        int majority = nums[0];
        int cnt = 1;

        for (int i = 1; i < n; i++)
        {
            if (nums[i] != majority)
            {
                cnt--;
            }
            else
                cnt++;
            if (cnt == 0)
            {
                majority = nums[i];
                cnt = 1;
            }
        }
        return majority;
    }
    int minimumIndex(vector<int> &nums)
    {

        int Dominant = FindDominant(nums);

        int Totalcnt = 0;

        for (auto &x : nums)
        {
            if (x == Dominant)
                Totalcnt++;
        }
        int leftcnt = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == Dominant)
            {
                leftcnt++;
            }

            int rightcnt = Totalcnt - leftcnt;
            int leftsize = i + 1;
            int rightsize = nums.size() - i - 1;

            if (leftcnt * 2 > leftsize && rightcnt * 2 > rightsize)
            {
                return i;
            }
        }
        return -1;
    }
};