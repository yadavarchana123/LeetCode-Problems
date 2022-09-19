class Solution
{
    public:
        int removeElement(vector<int> &nums, int val)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == val) nums[i] = -1;
            }
            int i = 0, j = 0;
            while (j < nums.size())
            {
                if (nums[j] != -1)
                {
                    swap(nums[i], nums[j]);
                    i++;
                }
                j++;
            }
            return i;
        }
};