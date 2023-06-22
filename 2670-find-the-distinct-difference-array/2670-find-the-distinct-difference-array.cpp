class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
       vector<int>ans;
       unordered_map<int,int>pre,suf;
        for(auto x : nums){
            suf[x]++;
        }
        for(auto x : nums){
            pre[x]++;
            suf[x]--;
            if(suf[x] == 0){
                suf.erase(x);
            }
            ans.push_back(pre.size()-suf.size());
        }
        return ans;
    }
};