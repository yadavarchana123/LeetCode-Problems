class Solution
{
    public:
        int longestSubarray(vector<int> &nums, int limit)
        {
            int i = 0, j = 0;
            multiset<int> mp;
            while (j < nums.size())
            {
                mp.insert(nums[j]);

                if (*mp.rbegin() - *mp.begin() > limit)
                {
                    mp.erase(mp.find(nums[i++]));
                }
                j++;
            }
            return j - i;
        }
};