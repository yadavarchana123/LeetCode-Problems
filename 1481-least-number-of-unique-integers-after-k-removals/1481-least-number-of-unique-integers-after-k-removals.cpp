class Solution {
public:
bool static cmp(pair<int,int>p1, pair<int,int>p2){
    return p1.first < p2.first;
}
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto x : arr)
        {
            mp[x]++;
        }
        vector<pair<int,int>>v;
        for(auto x : mp)
        {
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end(),cmp);
        int i=0;
        while(i < v.size() and k)
        {
            k--;
            mp[v[i].second]--;
            if(mp[v[i].second]==0) mp.erase(v[i].second),i++;
           
        }
        return mp.size();
    }
};