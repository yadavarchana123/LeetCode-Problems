class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
       if(nums.size() < 2)
           return 0;
        int n = nums.size(), diff = INT_MAX, idx ;
        vector<long long>left(n), right(n);
        left[0] = nums[0];
        for(int i=1; i<n; i++)
        {
           left[i] = left[i-1]+nums[i] ; 
        }
        for(int i=0; i<n; i++)
        {
           left[i] /= (i+1); 
          
        }
        right[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--)
        {
           right[i] = right[i+1] + nums[i];
        }
        for(int i=n-1; i>=0; i--)
        {
           right[i] /=   (n-i);
        }
        for(int i=0; i<n-1; i++)
        {
            long long temp = abs(left[i]-right[i+1]);
            if(temp < diff)
            {
                diff = temp;
                idx = i;
            }
        }
        if(left[n-1] < diff)
            return n-1;
        return idx;
    }
};