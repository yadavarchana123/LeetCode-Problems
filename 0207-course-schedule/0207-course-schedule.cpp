class Solution {
public:
     bool dfs(int node,  vector<int>adj[], vector<bool>& visited,vector<bool>& recur)
    {
        visited[node]=true;
        recur[node]=true;
        for(auto x: adj[node])
        {
            if(!visited[x])
            {
                if(dfs(x,adj,visited,recur))
                return true;
            }
            else if(recur[x]==true)
            {
                return true;
            }
        }
        recur[node]=false;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int>adj[n];
        vector<int>ans;
        vector<bool>visited(n,false),recur(n,false);
        for(auto x: pre)
        {
            adj[x[1]].push_back(x[0]);
        }
        for(int i=0; i<n; i++)
        {
            if(!visited[i])
            {
                if(dfs(i,adj,visited,recur))
                return false;
            }
        }
       return true;
    }
};