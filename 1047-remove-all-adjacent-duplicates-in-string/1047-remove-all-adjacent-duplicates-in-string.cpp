class Solution {
public:
    string removeDuplicates(string s) {
        string res = "";
        for(auto x : s)
        {
            if(res.size() and res.back() == x)
                res.pop_back();
            else
                res += x;
        }
        return res;
    }
};