class Solution
{
    public:
        int partitionArray(vector<int> &nums, int k)
        {
            int ans = 1;
            sort(nums.begin(), nums.end());
            for (int i = 1, j = 0; i < nums.size(); i++)
            {
                if (nums[i] - nums[j] <= k)
                    continue;
                ans++;
                j = i;
            }
            return ans;
        }
};