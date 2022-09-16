class Solution {
public:
    int minOperations(vector<int>& nums) {
      if(nums.size() == 1)
          return 0;
      int op = 0, maxi = nums[0];
      for(int i=1; i<nums.size(); i++)
      {
          if(nums[i] <= nums[i-1])
          {
              op += nums[i-1]-nums[i]+1;
              nums[i] += nums[i-1]-nums[i]+1;
             
          }
      }
      return op;
    }
};