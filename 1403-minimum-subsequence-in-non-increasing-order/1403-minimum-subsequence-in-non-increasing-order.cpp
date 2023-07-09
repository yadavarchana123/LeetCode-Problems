class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int sum = 0, temp=0;
        for(auto x : nums)
            sum += x;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            temp += nums[i];
            sum -= nums[i];
            ans.push_back(nums[i]);
            if(temp > sum)
                return ans;
            
        }
        return ans;
    }
};