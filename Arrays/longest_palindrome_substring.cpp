#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void expend(string &s, int left, int right, int &start, int &maxlen)
    {
        while (left >= 0 && right < s.size() && s[left] == s[right])
        {
            int len = right - left + 1;
            if (len > maxlen)
            {
                start = left;
                maxlen = len;
            }
            left--, right++;
        }
    }
    //  bool func(string &temp)
    //  {
    //       int n=temp.size();
    //       int i=0,j=n-1;
    //       while(i<j)
    //       {
    //          if(temp[i]!=temp[j]) return false;
    //          i++;
    //          j--;
    //       }
    //        return true;
    //  }
    string longestPalindrome(string s)
    {
        //         int n=s.size();
        //          int start=0;
        //  int maxlen=0;
        //
        //         for(int i =0;i<n;i++)
        //         {
        //             for(int j =i;j<n;j++)
        //             {
        //                  string temp=s.substr(i,j-i+1);
        //                  bool CheckPalindrome=func(temp);
        //                  if(CheckPalindrome==true)
        //                  {
        //                       curlen=j-i+1;
        //    if(curlen>maxlen)
        //    {
        //      maxlen=curlen;
        //      start=i;
        //    }
        //                  }
        //             }
        //         }
        //           return s.substr(start,maxlen);
        int start = 0, maxlen = 0;
        int n = s.size();
        if (n == 1)
            return s;
        if (n <= 0)
            return " ";
        for (int i = 0; i < n; i++)
        {
            expend(s, i, i, start, maxlen);     // odd
            expend(s, i, i + 1, start, maxlen); // even
        }
        return s.substr(start, maxlen);
    }
};