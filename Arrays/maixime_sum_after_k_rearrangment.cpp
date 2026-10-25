class Solution
{
public:
    int Arrange(int digit)
    {

        string s = to_string(digit);
        sort(s.begin(), s.end(), greater<char>());

        return stoi(s);
    }
    long long maximizeSum(vector<int> &nums, int k)
    {

        int n = nums.size();

        long long sum = 0;

        vector<int> gain;

        for (int i = 0; i < n; i++)
        {
            int ans = Arrange(nums[i]);
            gain.push_back(ans - nums[i]);
            sum += nums[i];
        }

        sort(gain.begin(), gain.end(), greater<int>());

        for (int i = 0; i < n; i++)
        {
            if (k > 0 && gain[i] > 0)
            {
                sum += gain[i];
                k--;
            }
        }
        return sum;
    }
};