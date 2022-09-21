class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
       int n = queries.size(), sum = 0;
       vector<int>ans(n);
       for(auto x : nums)
       {
           if(x%2 == 0)
               sum += x;
       }
       for(int i=0; i<n; i++)
       {
          int idx = queries[i][1];
          if(nums[idx] % 2 == 0)
               sum -= nums[idx];
          int k = nums[idx]+queries[i][0];
          if(k%2 == 0) sum += k;
          nums[idx]=k;
          ans[i]=sum;
       }
        return ans;
    }
};