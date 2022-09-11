class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
       vector<int>ans;
        int i=0;
       while(i<nums.size() and k)
       {
           ans.push_back(nums[i++]);
           k--;
       } 
        for(int j = i; j<nums.size(); j++)
        {
            int idx = min_element(ans.begin(),ans.end())-ans.begin();
            if(nums[j] > ans[idx])
            {
                ans.erase(ans.begin()+idx);
                ans.push_back(nums[j]);
            }
        }
        return ans;
    }
};
	