class Solution
{
public:
    bool isvowel(char ch)
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;

        return false;
    }
    string reverseVowels(string s)
    {

        int n = s.size();

        int i = 0, j = n - 1;

        while (i < j)
        {
            if (isvowel(s[i]) && isvowel(s[j]))
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if (isvowel(s[i]))
            {
                j--;
            }
            else if (isvowel(s[j]))
            {
                i++;
            }
            else
            {
                i++;
                j--;
            }
        }
        return s;
    }
};