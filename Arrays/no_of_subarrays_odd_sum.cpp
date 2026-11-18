class Solution
{
public:
    int numOfSubarrays(vector<int> &nums)
    {
        int n = nums.size();

        long long M = 1e9 + 7;
        // int cnt = 0;

        // for(int i = 0; i < n; i++)
        // {
        //      int sum = 0;

        //      for(int j = i; j < n; j++){
        //           sum += nums[j];
        //           if(sum % 2 != 0) cnt++;
        //      }
        // }
        //  return cnt %  M;

        vector<int> prefix(n, 0);

        prefix[0] = nums[0];

        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        int cnt = 0;
        int ecnt = 1;
        int ocnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (prefix[i] % 2 == 0) // odd + even = odd
            {
                cnt = (cnt + ocnt) % M;
                ecnt++;
            }
            else // even + odd  = odd
            {
                cnt = (cnt + ecnt) % M;
                ocnt++;
            }
        }
        return cnt;
    }
};