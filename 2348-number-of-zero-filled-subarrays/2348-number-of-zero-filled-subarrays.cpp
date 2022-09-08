class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
       long long ans =0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {   long long cnt = 0;
                while(i<nums.size() and nums[i]==0)
                {
                    cnt++;
                    i++;
                }
               ans += (cnt*(cnt+1))/2;
            }
        }
        return ans;
    }
};