class Solution {
public:
    static bool cmp(string s1, string s2){
        return s1+s2 > s2+s1;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>temp;
        for(auto x : nums){
            temp.push_back(to_string(x));
        }
        sort(temp.begin(), temp.end(), cmp);
        string ans = "";
        for(auto x : temp){
            ans += x;
        }
        while(ans[0] == '0' and ans.size()>1)
            ans.erase(0,1);
        return ans;
    }
};