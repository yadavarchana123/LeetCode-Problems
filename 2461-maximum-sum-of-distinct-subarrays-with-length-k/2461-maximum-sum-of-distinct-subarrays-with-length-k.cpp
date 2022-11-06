class Solution
{
    public:

        long long maximumSubarraySum(vector<int> &nums, int k)
        {
            if (nums.size() < k) return 0;
            unordered_map<int, int> mp;
            long long sum = 0, ans = 0;
            for (int i = 0; i < k; i++)
            {
                mp[nums[i]]++;
                sum += nums[i];
            }
            if (mp.size() == k)
                ans = sum;
            for (int i = k; i < nums.size(); i++)
            {
                mp[nums[i - k]]--;
                if (mp[nums[i - k]] == 0) mp.erase(nums[i - k]);
                mp[nums[i]]++;
                sum -= nums[i - k];
                sum += nums[i];
                if (sum > ans and mp.size() == k) ans = sum;
            }
            return ans;
        }
};