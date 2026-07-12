#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {

        reverse(s.begin(), s.end());

        int n = s.length();
        int i = 0, l = 0, r = 0;

        while (i < n)
        {
            // skip spaces
            while (i < n && s[i] == ' ')
                i++;

            // copy word
            while (i < n && s[i] != ' ')
                s[r++] = s[i++];

            // reverse copied word
            if (l < r)
            {
                reverse(s.begin() + l, s.begin() + r);

                // add space only if next word exists
                while (i < n && s[i] == ' ')
                    i++;

                if (i < n)
                    s[r++] = ' ';

                l = r;
            }
        }

        return s.substr(0, r);
    }
};
