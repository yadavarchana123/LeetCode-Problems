class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      int n = nums.size(), j=0, k=1;
      vector<int>ans(n); 
      for(int i=0; i<nums.size(); i++)
      {
          if(nums[i] > 0)
          {
              ans[j]=nums[i];
              j += 2;
          }
          else
          {
             ans[k]=nums[i]; 
             k += 2;
          }
      }    
      return ans;  
    }
};