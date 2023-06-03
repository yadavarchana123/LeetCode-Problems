class Solution {
public:
    int helper(int headID, vector<int>adj[], vector<int>& time)
    {
        queue<pair<int,int>>q;
        q.push({headID,0});
        int time_taken = 0;
        while(!q.empty())
        {
            int emp = q.front().first;
            int t = q.front().second;
            q.pop();
            for(auto x : adj[emp])
            {
                q.push({x,t+time[emp]});
            }
            if(t > time_taken )
            {
                time_taken = t;
            }
        }
        return time_taken;
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& time) {
       vector<int>adj[n];
        for(int i=0; i<n; i++)
        {
            if(manager[i] != -1)
            {
                adj[manager[i]].push_back(i);
            }
        }
        return helper(headID,adj,time);
    }
};