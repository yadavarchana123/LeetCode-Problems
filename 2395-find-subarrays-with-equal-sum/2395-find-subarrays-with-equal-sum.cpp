class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int,int>mp;
        if(nums.size() < 3)
            return false;
        int sum = nums[0]+nums[1];
        mp[sum]++;
        for(int i=2; i<nums.size(); i++)
        {
           sum -= nums[i-2];
           sum += nums[i];
           if(mp.find(sum) != mp.end())
               return true;
           mp[sum]++;
        }
        return false;
    }
};