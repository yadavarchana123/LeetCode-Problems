class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int idx = 0, cnt =1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[idx]){
                cnt++;
            }
            else
                cnt--;
            if(cnt == 0){
                idx = i;
                cnt =1;
            }
        }
        return nums[idx];
    }
};