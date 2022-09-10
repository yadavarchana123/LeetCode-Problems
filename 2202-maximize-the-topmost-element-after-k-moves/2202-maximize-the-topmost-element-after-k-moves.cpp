class Solution
{
    public:
        int maximumTop(vector<int> &nums, int k)
        {
            if (k == 0)
                return nums.size() ? nums[0] : -1;
            if (nums.size() == 1)
            {
                return ((k % 2 == 0) ? nums[0] : -1);
            }
            if (k == 1)
                return nums.size() >= 2 ? nums[1] : -1;
            if (k > nums.size())
                return* max_element(nums.begin(), nums.end());
            priority_queue<int> q(nums.begin(), nums.begin() + k - 1);
            if (k < nums.size())
                return max(q.top(), nums[k]);
            return q.top();
        }
};