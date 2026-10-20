class Solution
{
public:
    int waysToSplitArray(vector<int> &nums)
    {

        int n = nums.size();

        // vector<long long>psum(n - 1);
        // vector<long long>ssum(n - 1);
        // int cnt = 0;

        // psum[0] = nums[0];
        // ssum[n - 2] = nums[n - 1];

        // for(int i = 1; i < n - 1; i++)
        // {
        //      psum[i] = psum[i - 1] + nums[i];
        // }
        // for(int i = n - 3; i >= 0; i--)
        // {
        //      ssum[i] = ssum[i + 1] + nums[i + 1];
        // }

        // for(int i = 0; i < n - 1; i++)
        // {
        //      if(psum[i] >= ssum[i]) cnt++;
        // }

        //    return cnt;

        long long psum = 0;
        long long Tsum = 0;
        int cnt = 0;

        for (auto &x : nums)
            Tsum += x;

        for (int i = 0; i < n - 1; i++)
        {
            psum += nums[i];
            Tsum -= nums[i];
            if (psum >= Tsum)
                cnt++;
        }
        return cnt;
    }
};