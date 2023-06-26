class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() == 1) return;
        if(nums.size() == 2){
           reverse(nums.begin(), nums.end());
            return; 
        }
        int i = nums.size()-2;
        while( i >= 0){
            if(nums[i] < nums[i+1])
                break;
            i--;
        }
        if( i< 0){
            reverse(nums.begin(), nums.end());
            return;
        }
        int temp = i;
        i = nums.size()-1;
        while(i > temp){
            if(nums[i] > nums[temp])
                break;
            i--;
        }
        swap(nums[i],nums[temp]);
        sort(nums.begin()+temp+1, nums.end());
    }
};