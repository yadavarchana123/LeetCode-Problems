class Solution
{
    public:
        int deleteGreatestValue(vector<vector < int>> &grid)
        {
            int r = grid.size(), c = grid[0].size(), ans = 0;
            for (int i = 0; i < c; i++)
            {
                int maxi = INT_MIN;
                for (int j = 0; j < r; j++)
                {
                    auto temp = max_element(grid[j].begin(), grid[j].end());
                    maxi = max(maxi, *temp);
                    *temp = -1;
                }
                ans += maxi;
            }
            return ans;
        }
};