class Solution {
public:
    
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string,vector<string>>adj;
        unordered_map<string,int>indegree;
        for(int i=0; i<ingredients.size(); i++)
        {
            for(auto y :ingredients[i])
            {
                adj[y].push_back(recipes[i]);
                indegree[recipes[i]]++;
            } 
        }
        queue<string>q;
        for( auto x : supplies)
        {
            q.push(x);
        }
        while(!q.empty())
        {
            string current = q.front();
            q.pop();

            for(string recipe : adj[current])
            {
                indegree[recipe]--;
                if(indegree[recipe] == 0)
                {
                    q.push(recipe);
                }
            }
        }

        vector<string> ans;
        for(string recipe : recipes)
        {
            if(indegree[recipe] == 0)
            {
                ans.push_back(recipe);
            }
        }
        return ans;
    }
};