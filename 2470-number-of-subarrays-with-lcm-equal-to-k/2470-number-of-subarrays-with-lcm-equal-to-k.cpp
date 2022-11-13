class Solution
{
    public:
        int subarrayLCM(vector<int> &nums, int k)
        {
            int n = nums.size();
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                unsigned int temp = nums[i];
                for (int j = i; j < n; j++)
                {
                    temp = lcm(temp, nums[j]);
                    if (temp == k) cnt++;
                }
            }
            return cnt;
        }
};