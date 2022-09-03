class Solution
{
    public:
        string greatestLetter(string s)
        {
            unordered_set<char> mp;
            string ans = "";
            for (auto x: s)
            { 
                if(islower(x))
                mp.insert(x);
            }
            for (auto x: s)
            {
                if (isupper(x))
                {
                    if (mp.find(x + ' ') != mp.end() and ans[0] < x)
                    {
                        ans = x;
                    }
                }
            }
            return ans;
        }
};