class Solution
{
    public:
        int appendCharacters(string s, string t)
        {
            int i = 0, j = 0;
            while (i < s.size() and j < t.size())
            {
                if (t[j] == s[i])
                {
                    i++, j++;
                }
                else
                    i++;
            }
            return t.size() - j;
        }
};