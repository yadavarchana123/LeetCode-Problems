class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
       int ans = 0;
        unordered_map<string,int>mp;
       for(auto x : words){
           string temp = x ;
           reverse(x.begin(), x.end());
           if(mp[x]){
               ans++;
           }
           else
               mp[temp]++;
       }
        return ans;
    }
};