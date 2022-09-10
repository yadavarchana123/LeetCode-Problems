class Solution
{
    public:
        void dfs(int i, int j, vector<vector < int>> &grid, int dir)
        {
            if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 1 || grid[i][j] == 0)
                return;
            grid[i][j] = 3;
            if (dir == 1)
                dfs(i + 1, j, grid, dir);
            if (dir == 2)
                dfs(i - 1, j, grid, dir);
            if (dir == 3)
                dfs(i, j + 1, grid, dir);
            if (dir == 4)
                dfs(i, j - 1, grid, dir);
        }
   	// let 0 for gaurd, 1 for wall, 2 for unvisited, 3 for visited cells
    int countUnguarded(int m, int n, vector<vector < int>> &guards, vector< vector< int>> &walls)
    {
        vector<vector < int>> grid(m, vector<int> (n, 2));
        int count = 0;
        for (int i = 0; i < guards.size(); i++)
        {
            grid[guards[i][0]][guards[i][1]] = 0;
        }
        for (int i = 0; i < walls.size(); i++)
        {
            grid[walls[i][0]][walls[i][1]] = 1;
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 0)
                {
                    dfs(i + 1, j, grid, 1);
                    dfs(i - 1, j, grid, 2);
                    dfs(i, j + 1, grid, 3);
                    dfs(i, j - 1, grid, 4);
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 2)
                {
                    count++;
                }
            }
        }
        return count;
    }
};