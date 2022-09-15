class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        unordered_map<int,int>indegree;
        for(auto x : edges)
        {
            indegree[x[0]]++;
            if( indegree[x[0]]==n) return x[0];
            indegree[x[1]]++;
            if( indegree[x[1]]==n) return x[1];
        }
        return -1;
    }
};