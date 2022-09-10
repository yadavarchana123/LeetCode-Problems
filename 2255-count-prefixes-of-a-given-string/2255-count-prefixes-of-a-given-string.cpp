class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        for(auto x : words)
        {
            if(s.find(x) < 1)
                count++;
        }
        return count;
    }
};