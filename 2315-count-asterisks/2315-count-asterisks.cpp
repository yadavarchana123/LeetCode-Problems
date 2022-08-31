class Solution
{
    public:
        int countAsterisks(string s)
        {
            int bar = 0, asterisks = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '|')
                    bar++;
                if (bar % 2 == 0)
                {
                    if (s[i] == '*')
                        asterisks++;
                }
            }
            return asterisks;
        }
};