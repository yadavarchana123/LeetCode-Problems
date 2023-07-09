class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(k and nums[i] < 0){
                nums[i] *= -1;
                k--;
            }
            else if(k%2){
                if(nums[i] == 0)
                {
                    k=0;
                    break;
                }
                if(i>0 and nums[i-1] < nums[i])
                    nums[i-1] = -1*nums[i-1];
                else
                    nums[i] = -1*nums[i];
                k=0;
            }
        }
        if(k%2){
            nums[nums.size()-1] *= -1;
        }
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }
        return sum;
    }
};