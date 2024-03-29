class Solution {
public:
    void helper(int idx, int n,vector<int>& nums,vector<vector<int>>&ans)
    {
        if(idx==n)
        {
            ans.push_back(nums);
            return ;
        }
         
        for(int i=idx; i<=n; i++)
        {
            
            swap(nums[i],nums[idx]);
            
            helper(idx+1,n,nums,ans);
          
            swap(nums[i],nums[idx]);
           
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        helper(0,nums.size()-1,nums,ans);
        return ans;
    }
};