class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans =0;
       sort(nums.begin(),nums.end());
        for(int i=2; i<nums.size(); i++)
        {
            int j=0, k=i-1;
            while(j<k)
            {
                if(nums[j]+nums[k] > nums[i])
                {
                    ans += k-j;
                    k --;
                }
                else
                {
                    j ++;
                }
            }
        }
        return ans;
    }
};