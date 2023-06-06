class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int pos1 = 0, posn = nums.size(), n = nums.size();
        for(int i = 0; i < n; ++i){
            if(nums[i] == 1) pos1 = i;
            if(nums[i] == n) posn = i;
        }
        if(pos1 < posn) return (pos1 + n - posn - 1);
        return (pos1 + n - posn - 1) - 1;
        
    }
};