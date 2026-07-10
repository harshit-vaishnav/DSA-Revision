#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        int n = s.size();
        //  step-1 Brute force
        // if(s==goal) return true;
        // if(s.length()>goal.length() || goal.length() >s.length()) return false;
        // int rotation=0;
        // while(rotation<n)
        // {
        //    char ch=s[0];
        //  for(int i =0;i<n-1;i++)
        //  {
        //        s[i]=s[i+1];
        //  }
        //    s[n-1]=ch;
        //    if(s==goal) return true;
        //     rotation++;
        // }
        //  return false;
        //   step-2 Optimal
        if (s.length() > goal.length() || goal.length() > s.length())
            return false;
        s += s;
        return s.find(goal) != string::npos;
    }
};