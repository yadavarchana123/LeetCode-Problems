class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), t;
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                t = i;
                break;
            }
        }
        if(t < 0) {
            reverse(nums.begin(), nums.end());
        }
        else{
        int k;
        for(int j = n-1; j>t; j--){
            if(nums[j] > nums[t]){
                k = j;
                break;
            }
        }
        swap(nums[t], nums[k]);
        sort(nums.begin()+t+1, nums.end());
        }
    }
};