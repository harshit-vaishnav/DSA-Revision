class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 100000;

        sort(begin(nums), end(nums));

        for(int i = 0; i < n - 2; i++)
        {
             int j = i + 1;
             int k = n - 1;
             while(j < k)
             {
                 int sum = nums[i] + nums[j] + nums[k];

                 if(abs(target -  sum) < abs(target - ans))
                 {
                     ans = sum;
                 }

                 if(sum > target) k--;
                 else j++;
             } 
        }
         return ans;
        
    }
};