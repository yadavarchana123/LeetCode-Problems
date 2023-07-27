class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin(), nums.end()), ans = 0;
        while(k){
            ans += maxi;
            maxi++;
            k--;
        }
        return ans;
    }
};