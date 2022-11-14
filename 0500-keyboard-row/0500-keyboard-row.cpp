class Solution
{
    public:
        vector<string> findWords(vector<string> &words)
        {
            vector<string> ans;
            unordered_map<char, int> mp;
            string row1 = "qwertyuiop", row2 = "asdfghjkl", row3 = "zxcvbnm";
            int i = 0;
            while (i < row1.size())
                mp[row1[i]] = 1, mp[row1[i] - 32] = 1, i++;
            i = 0;
            while (i < row2.size())
                mp[row2[i]] = 2, mp[row2[i] - 32] = 2, i++;;
            i = 0;
            while (i < row3.size())
                mp[row3[i]] = 3, mp[row3[i] - 32] = 3, i++;;
            for (auto x: words)
            {
                string temp = "";
                int idx = mp[x[0]];
                for (auto y: x)
                {
                    if (mp[y] != idx)
                        break;

                    temp += y;
                }
                if (temp.size() == x.size())
                    ans.push_back(x);
            }
            return ans;
        }
};