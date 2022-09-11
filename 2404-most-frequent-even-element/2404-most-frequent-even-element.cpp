class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans  = -1, maxi = INT_MIN;
        map<int,int>mp;
        for(auto x : nums)
        {
            mp[x]++;
        }
        for(auto x : mp)
        {
            if(x.second > maxi and (x.first%2 == 0))
            {
                ans = x.first;
                maxi = x.second;
            }
        }
        return ans;
    }
};