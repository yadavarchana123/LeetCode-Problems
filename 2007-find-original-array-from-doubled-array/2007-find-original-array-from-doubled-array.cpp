class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
     int n = changed.size() ;
     if(n % 2)
         return {};
     unordered_map<int,int>mp; vector<int>ans;
     sort(changed.begin(),changed.end());
     for(auto x: changed)
     {
         mp[x]++;
     }
     for(auto x : changed)
     {
         if(mp.find(x) != mp.end() )
         {
             mp[x]--;
             if(mp[x] == 0)
                 mp.erase(x);
             if(mp.find(2*x) != mp.end())
             {
                ans.push_back(x);
                mp[2*x]--;
                if(mp[2*x]==0)
                 mp.erase(2*x);
             }
         }
     }
    if(ans.size()==n/2)
        return ans;
    return {};
    }
};