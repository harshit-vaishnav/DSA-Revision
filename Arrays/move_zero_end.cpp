#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        //    int i=0;
        //    int j=1;
        //    while(j<n)
        //    {
        //       if((nums[i]!=0) && (nums[j]!=0))
        //       {
        //         i=i+2;
        //         j=j+2;
        //       }
        //       else if(nums[i]==0 && nums[j]!=0)
        //       {
        //         swap(nums[i],nums[j]);
        //         i++;
        //         j++;
        //       }
        //       else if(nums[i]!=0 && nums[j]==0)
        //       {
        //         i++;
        //         j++;
        //       }
        //      else
        //       {
        //         j=j+1;
        //       }
        //    }

        // vector<int>temp;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]!=0)
        //     {
        //         temp.push_back(nums[i]);
        //     }
        // }
        // for(int i=temp.size();i<n;i++)
        // {
        //         temp.push_back(0);
        // }
        // nums=temp;

        // }

        // optimal- find first zero ppinte
        int ZeroPointer = -1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                ZeroPointer = i;
                break;
            }
        }
        if (ZeroPointer != -1)
        {

            for (int i = ZeroPointer + 1; i < n; i++)
            {
                if (nums[i] != 0)
                {
                    swap(nums[i], nums[ZeroPointer]);
                    ZeroPointer++;
                }
            }
        }
    }
};