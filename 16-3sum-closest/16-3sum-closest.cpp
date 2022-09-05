class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      sort(nums.begin(), nums.end());
      int min = INT_MAX,ans;
      for(int i=0; i<nums.size()-1; i++)
      {
          int j=i+1, k = nums.size()-1;
          while(j < k)
          {
              int sum = nums[i]+nums[j]+nums[k];
              if(sum == target)
                  return sum;
              if(abs(target - sum ) < min)
              {
                  min = abs(target - sum );
                  ans = sum ;
              }
              if( sum < target)
                  j++;
              else
                  k--;
          }
      }
        return ans;
    }
};