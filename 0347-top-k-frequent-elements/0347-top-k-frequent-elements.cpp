class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
        }
        priority_queue<pair<int,int>>q;
        vector<int>res;
        for(auto x : mp){
            q.push({x.second,x.first});
            if(q.size() > mp.size()-k){
                res.push_back(q.top().second);
                q.pop();
            }
        }
        return res;
    }
};