class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>>v;
        int n = nums.size();
        if(n< 3)
            return v;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n ; i++)
        {
            int tar = -nums[i];
            int low = i+1;
            int high = n-1;
            while(low < high)
            {
                int sum = nums[low] + nums[high];
                if(sum == tar)
                {
                    vector<int>t={nums[i],nums[low],nums[high]};
                    v.push_back(t);
                    while(low < high and nums[low]==t[1])
                        low++;
                    while(low < high and nums[high]==t[2])
                        high--;
                    
                }
                else if(sum < tar)
                 low++;
                else
                  high--;
            }
            while(i+1 < n and nums[i] == nums[i+1])
                i++;
        }
        return v;
    }
};