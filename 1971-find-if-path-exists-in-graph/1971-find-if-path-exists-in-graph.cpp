class Solution {
public:
    bool flag = false;
    void dfs(vector<int>adj[], vector<bool>&visited, int s, int d){
        visited[s] = true;
        if(s == d){
            flag = true;
            return ;
        }
        for(auto x : adj[s]){
            if(!visited[x]){
                 visited[x] = true;
                 dfs(adj,visited,x,d);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edge, int source, int destination) {
        vector<int>adj[n]; vector<bool>visited(n,false);
        for(int i=0; i<edge.size(); i++){
            adj[edge[i][0]].push_back(edge[i][1]);
            adj[edge[i][1]].push_back(edge[i][0]);
        }
        dfs(adj,visited,source,destination);
        return flag;
    }
};