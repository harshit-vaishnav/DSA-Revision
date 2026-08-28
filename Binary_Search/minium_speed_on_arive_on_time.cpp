#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double CountTime(vector<int> &nums, int speed, double hour)
    {
        int n = nums.size();

        double Ttime = 0;

        for (int i = 0; i < n - 1; i++)
        {
            Ttime += (nums[i] + speed - 1) / speed;
            if (Ttime > hour)
                return Ttime;
        }

        Ttime += (double)nums[n - 1] / speed;

        return Ttime;
    }
    int minSpeedOnTime(vector<int> &nums, double hour)
    {

        int n = nums.size();

        int low = 1, high = 1e7;

        while (low < high)
        {
            int speed = low + (high - low) / 2;

            double Ttime = CountTime(nums, speed, hour);
            if (Ttime > hour)
            {
                low = speed + 1;
            }
            else
            {
                high = speed;
            }
        }

        if (CountTime(nums, low, hour) > hour)
            return -1;
        return low;
    }
};