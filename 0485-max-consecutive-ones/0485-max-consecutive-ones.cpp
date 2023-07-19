class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, cnt =0, i = 0;
        while(i < nums.size()){
            if(nums[i] == 0){
                cnt = 0;
            }
            else{
                cnt++;
                ans = max(ans, cnt);
            }
            i++;
        }
        return ans;
    }
};