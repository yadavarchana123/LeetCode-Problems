class Solution {
public:
   void dfs(int node, vector<int>adj[],vector<bool>& visited)
    {
        visited[node]=true;
        for(auto x: adj[node])
        {
            if(!visited[x])
                dfs(x,adj,visited);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int m = isConnected[0].size();
        vector<int>adj[n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<bool>visited(n,false);
        int provinces=0;
        for(int i=0; i<n; i++)
        {
            if(!visited[i])
            {
                dfs(i,adj,visited);
                provinces++;
            }
        }
        return provinces;
    }
};