class Solution
{
    public:
        vector<int> findAnagrams(string s, string p)
        {
            vector<int> ans;
            int l = p.length(), r = s.length();
            if (l > r)
                return ans;
            vector<int> freq1(26, 0), freq2(26, 0);
            for (int i = 0; i < l; i++)
            {
                freq1[s[i] - 'a']++;
                freq2[p[i] - 'a']++;
            }
            if (freq1 == freq2)
                ans.push_back(0);
            for (int i = l; i < r; i++)
            {
                freq1[s[i] - 'a']++;
                freq1[s[i - l] - 'a']--;
                if (freq1 == freq2)
                    ans.push_back(i - l + 1);
            }
            return ans;
        }
};