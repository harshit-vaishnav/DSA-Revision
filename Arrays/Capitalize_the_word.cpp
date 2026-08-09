#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string capitalizeTitle(string s)
    {
        int n = s.size();
        bool flag = true;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ')
            {
                flag = true;
                if (cnt == 1)
                    s[i - 1] = tolower(s[i - 1]);
                if (cnt == 2)
                {
                    s[i - 2] = tolower(s[i - 2]);
                    s[i - 1] = tolower(s[i - 1]);
                }
                cnt = 0;
            }
            else if (flag)
            {
                s[i] = toupper(s[i]);
                flag = false;
                cnt++;
            }
            else
            {
                s[i] = tolower(s[i]);
                cnt++;
            }
        }
        if (cnt == 1)
            s[n - 1] = tolower(s[n - 1]);
        if (cnt == 2)
        {
            s[n - 1] = tolower(s[n - 1]);
            s[n - 2] = tolower(s[n - 2]);
        }
        return s;

        // int cnt = 0;
        // for(int i = 0; i < n; i++)
        // {
        //     if(s[i] == ' ')
        //     {
        //       if(cnt == 1) s[i - 1] = tolower(s[i - 1]);
        //       if(cnt == 2)
        //       {
        //         s[i-2] = tolower(s[i-2]);
        //         s[i-1] = tolower(s[i-1]);

        //       }
        //        cnt = 0;
        //     }
        //     else
        //     {
        //          cnt++;
        //     }
        // }
        // if(cnt == 1) s[n - 1] = tolower(s[n- 1]);
        // if(cnt == 2)
        // {
        //      s[n - 1] = tolower(s[n- 1]);
        //      s[n - 2] = tolower(s[n - 2]);
        // }
        //  return s;
    }
};