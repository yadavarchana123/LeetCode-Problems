class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
       int len=0,sum=0,k=0,min_len=INT_MAX;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            len++;
            if(sum>=t)
            {
               
                while(sum>=t)
                {
                    sum-=nums[k++];
                    if(sum>=t)
                    len--;
                }
                min_len=min(min_len,len);
                len--;
            }
        }
        if(min_len==INT_MAX)
            return 0;
        return min_len;
    }
};