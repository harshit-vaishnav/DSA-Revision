class Solution
{
public:
    int findMaxLength(vector<int> &nums)
    {

        // Brute Force TC-O(N^2) SC - O(1)
        //  int n = nums.size();
        //  int maxlen = 0;
        //  for(int i = 0; i < n; i++)
        //  {
        //      int zero = 0, one = 0;
        //      for(int j = i; j < n; j++){
        //          if(nums[j] == 0) zero++;
        //          else one++;
        //          if(zero == one) maxlen = max(maxlen, j - i + 1);
        //      }
        //  }
        //     return maxlen;

        //  optimal

        int n = nums.size();

        int sum = 0;

        int maxlen = 0;

        unordered_map<int, int> mpp; // sum - > index

        for (auto &x : nums)
            if (x == 0)
                x = -1;

        mpp[0] = -1;

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];

            if (mpp.find(sum) != mpp.end())
            {
                maxlen = max(maxlen, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }

        return maxlen;
    }
};