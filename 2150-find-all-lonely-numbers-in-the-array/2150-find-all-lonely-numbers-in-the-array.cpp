class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x: nums)
        {
            mp[x]++;
        }
        vector<int>ans;
        for(auto x : nums)
        {
            if(mp[x] == 1 and mp.find(x+1) == mp.end() and mp.find(x-1) == mp.end())
                ans.push_back(x);
        }
        return ans;
    }
};