class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string,int>st;
        for(auto x: words)
        {
            st[x]++;
        }
        int count= 0;
        for(int i=0; i<s.size(); i++)
        {
            string temp = s.substr(0,i+1);
            if(st.find(temp) != st.end())
                count += st[temp];
        }
        return count;
    }
};