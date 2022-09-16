class Solution {
public:
    long reverse(int x)
    {
        long temp = 0;
        while(x)
        {
            int r = x%10;
            x /= 10;
            temp = temp *10 + r;
        }
        return temp;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<long,long>mp;
        for(auto x : nums){
           mp[x-reverse(x)]++;   
        }
        int res = 0, mod = 1e9+7;
        for(auto x : mp)
        {
            res =( res + (x.second*(x.second-1)/2))%mod;
        }
        return res;
    }
};