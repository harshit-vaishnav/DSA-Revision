#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // better solution TC-O(2 * N) SC - O(1)
        //  int n = nums.size();
        //  int i = 0;
        //  for(int j = 0; j < n; j++)
        //  {
        //     if(nums[j] == 0)
        //     {
        //          swap(nums[i],nums[j]);
        //          i++;
        //     }
        //  }

        //  for(int j = i; j < n; j++)
        //  {
        //     if(nums[j] == 1)
        //     {
        //          swap(nums[i],nums[j]);
        //          i++;
        //     }
        //  }

        //  optimal TC-O(N) SC - O(1)
        /*use 3 pointer i,j,k i for 0 and 1 for j and k for 2 we know that if j has 2 to
        hame swap karna padega k ke sath or k ko decrease kargee kyuki last me 2 aayeg agar j ki value 1
        h to j ko aage move karege agar j ki value 0 he to swap karege i ke sath kyuni i 0 ko leta h fir i ko bandhyeege but j ko bhi badhye kyunki start me 0 hi ayega kab tak karege jab tak j k ko cross nahi kare */
        int n = nums.size();
        int i = 0;     // denotes 0
        int j = 0;     // denotes 1
        int k = n - 1; // denotes 2
        while (j <= k) // jab tak j cross nhi kare k ko
        {
            if (nums[j] == 2) // agar 2 h or 2 to k ko chaiye yani swap karo j k ko or k ko decrease karo
            {
                swap(nums[j], nums[k]);
                k--;
            }
            else if (nums[j] == 1) // j ki value 1 h or 1 to j kud h yani kuch nahi aage move karo
            {
                j++;
            }
            else // j 2 nhi h 1 nhi h to j = 0 h and 0 denotes i to i ko swap karo j kesath and move karo i and j ko
            {
                swap(nums[i], nums[j]);
                i++;
                j++; // j ko move isliye kiya kyunki sstart me fix h 0 ayega ab 0 fix hogya to j bhi move hoga kyuki j 0 se start hua
            }
        }
    }
};