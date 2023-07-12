class Solution {
public:
    
    /*
	States of a Node : 

		0 -> Unvisited
		1 -> Visited
		2 -> Safe
		3 -> Unsafe (Part of a cycle)
*/
    
   bool dfs(int node, vector<vector<int>>& graph,vector<int>& states)
   {
       states[node]=1;
       for(auto x: graph[node])
       {
           if(states[x]==0)
           {
               if(dfs(x,graph,states))
               {
                   states[x]=3;
                   return true;
               }
           }
           else if(states[x] != 2)
           {
               states[x]=3;
               return true;
           }
       }
       states[node]=2;
       return false;
   }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       int n = graph.size();
        vector<int>states(n,0),v;
        for(int i = 0; i< n; i++)
        {
            if(states[i]==0)
            {
                if(dfs(i,graph,states))
                    states[i]=3;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(states[i]==2)
                v.push_back(i);
        }
        return v;
    }
};