#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int count(vector<int> &nums, int products, int stores)
    {
        int Tstores = 0;

        for (auto &x : nums)
        {
            Tstores += (x + products - 1) / products;

            if (Tstores > stores)
                return Tstores;
        }

        return Tstores;
    }

    int minimizedMaximum(int stores, vector<int> &nums)
    {
        int n = nums.size();

        int low = 1, high = *max_element(nums.begin(), nums.end());

        while (low < high)
        {
            int products = low + (high - low) / 2;

            int Tstores = count(nums, products, stores);

            if (Tstores <= stores)
                high = products;
            else
                low = products + 1;
        }
        return low;
    }
};