#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {

        if (nums1.size() > nums2.size())
            swap(nums1, nums2);

        int n1 = nums1.size();
        int n2 = nums2.size();

        for (int i = 0; i < n1; i++)
        {

            int target = nums1[i];

            int low = 0, high = n2 - 1;

            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (nums2[mid] == target)
                    return nums2[mid];
                else if (nums2[mid] > target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
        }
        return -1;
    }
};