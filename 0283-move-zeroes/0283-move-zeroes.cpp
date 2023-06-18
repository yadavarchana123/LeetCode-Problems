class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, j=0, n=nums.size();
        
        while(j < n)
        {
            if(nums[j])
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else
                j++;
        }
    }
};