class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char>st;
        for(auto x : s) {
            st.insert(x);
        }
        return st.size();
    }
};