class Solution {
public:
    int partitionString(string s) {
            int i = 0, j = 0, ans = 1;
            unordered_map<char, int> mp;
            while (j < s.size())
            {
                mp[s[j]]++;
                while(j< s.size() and mp.size() == j - i + 1)
                {
                     j++;
                    mp[s[j]]++;
                   
                }
                if(mp.size() < j - i + 1)
                {
                   
                   ans++;
                   mp.clear();
                   mp[s[j]]++;
                   i = j;
                }
                j++;
            }

            return ans;  
    }
};