#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> result;
    void TwoSum(vector<int> &nums, int target, int i, int j)
    {
        while (i < j)
        {
            if (nums[i] + nums[j] > target)
                j--;
            else if (nums[i] + nums[j] < target)
                i++;
            else
            {
                while (i < j && nums[i] == nums[i + 1])
                    i++;
                while (i < j && nums[j] == nums[j - 1])
                    j--;
                result.push_back({-target, nums[i], nums[j]});
                i++;
                j--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int> &nums)
    {
        // Brute Force
        //  int n = nums.size();
        //     set<vector<int>>s;
        //  for(int i = 0; i < n; i++)
        //  {
        //      unordered_map<int,int>mpp;
        //   for(int j = i+1; j < n; j++)
        //   {
        //       vector<int>ele;
        //       int  x = -(nums[j] + nums[i]);
        //        if(mpp.find(x) != mpp.end())
        //        {
        //           ele.push_back(nums[i]);
        //           ele.push_back(nums[j]);
        //           ele.push_back(x);
        //           sort(ele.begin(),ele.end());
        //           s.insert(ele);
        //        }
        //         mpp[nums[j]] = j;
        //      }
        //   }
        //    vector<vector<int>>ans(s.begin(),s.end());
        //    return ans;

        // Optimal  TC-O(N^2) SC -O(1)
        // approach n1 + n2 + n3 = 0
        // so n2 + n3 = -n1;
        // ham n1 ko fix kar dege or har bar two sum laga kar check kar lege ki ese 2 number jiska sum n1 ke equal h agar equal h to use ans me dalo
        // duplicate avoid karne ke liye check kar lege cuurent element next element ke equal h kya agar h to usko skip karo
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int n1 = nums[i];
            int target = -n1;
            TwoSum(nums, target, i + 1, n - 1);
        }
        return result;
    }
};