class Solution {
    
       vector<vector<bool>>pacific,Atlantic;
       vector<vector<int>> ans;
public:
    void dfs(int i, int j,vector<vector<int>>& heights,vector<vector<bool>>& visited)
    {
        if(visited[i][j])
            return ;
        visited[i][j]=true;
        if(pacific[i][j] and Atlantic[i][j])
        {
            ans.push_back({i,j});
        }
        if(i+1<heights.size() and heights[i+1][j]>=heights[i][j])
        {
            dfs(i+1,j,heights,visited);
        }
        if(i-1 >=0 and heights[i-1][j]>=heights[i][j])
        {
            dfs(i-1,j,heights,visited);
        }
        if(j+1<heights[0].size() and heights[i][j+1]>=heights[i][j])
        {
            dfs(i,j+1,heights,visited);
        }
        if(j-1 >=0 and heights[i][j-1]>=heights[i][j])
        {
            dfs(i,j-1,heights,visited);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size(), m = heights[0].size();
        pacific = Atlantic = vector<vector<bool>>(n, vector<bool>(m,false));
      
        for(int i=0; i<n; i++)
        {
            dfs(i,0,heights,pacific);
            dfs(i,m-1,heights,Atlantic);
        }
        for(int i=0; i<m; i++)
        {
            dfs(0,i,heights,pacific);
            dfs(n-1,i,heights,Atlantic);
        }
        return ans;
    }
};


