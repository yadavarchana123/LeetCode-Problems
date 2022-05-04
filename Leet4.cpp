// https://leetcode.com/problems/max-number-of-k-sum-pairs/
// Time complexity: O(N LOG N)

int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i=0, j=nums.size()-1,cnt=0;
        while(i<j)
        {
            if(nums[i]+nums[j]==k)
            {
                cnt++;
                i++;
                j--;
            }
            else if(nums[i]+nums[j] < k)
            {
                i++;
            }
            else
                j--;
        }
        return cnt;
    }

// Better Approach
// Time complexity: O(N)

 int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp; int cnt=0;
        for(auto x: nums)
        {
            int y= k-x;
            if(mp[y]>0)
            {
                mp[y]--;
                cnt++;
            }
            else
                mp[x]++;
        }
        return cnt;
    }
