class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp; unordered_set<int>s;
        for(int i=0; i< arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        for(auto x: mp)
        {
            s.insert(x.second);
        }
        return s.size()==mp.size();
    }
};