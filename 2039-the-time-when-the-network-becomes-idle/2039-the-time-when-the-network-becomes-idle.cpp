class Solution {
public:
    int networkBecomesIdle(vector<vector<int>>& edges, vector<int>& patience) {
        int n = patience.size();
        vector<int> adj[n];
        for(auto x : edges)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<int> time(n,-1);
        queue<int>q;
        q.push(0);
        time[0]=0;
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            for(auto x : adj[curr])
            {
                if(time[x]==-1)
                {
                    time[x]=time[curr]+1;
                    q.push(x);
                }
            }
        }
        int res = 0;
        for(int i=1; i<n; i++)
        {
          int no_of_message_from_ith_server = (time[i]*2 - 1)/patience[i];
          int last_out_from_ith_server = no_of_message_from_ith_server * patience[i];
          int last_in_at_ith_server = last_out_from_ith_server + 2*time[i];
            res = max(res, last_in_at_ith_server );
        }
        return res+1;
    }
};