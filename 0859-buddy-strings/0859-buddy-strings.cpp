class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size())
            return false;
        if(s == goal){
            unordered_set<char>st(s.begin(),s.end());
            return st.size()<s.size();
        }
        vector<int>v;
        for(int i=0; i<s.size(); i++){
            if(s[i] != goal[i]){
                v.push_back(i);
            }
        }
        if(v.size() != 2){
            return false;
        }
        return (s[v[0]] == goal[v[1]] and goal[v[0]] == s[v[1]]);
    }
};