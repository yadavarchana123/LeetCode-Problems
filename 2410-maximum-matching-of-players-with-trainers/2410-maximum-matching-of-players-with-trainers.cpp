class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort( players.begin(), players.end());
        int count =0;
        priority_queue<int,vector<int>,greater<int>>q;
        for(auto x : trainers)
        {
            q.push(x);
        }
        int i=0;
        while( !q.empty() )
        {
            if( i<players.size() and !q.empty() and players[i] <= q.top())
            {
                count++;
                q.pop();
                i++;
            }
            else if(!q.empty())
                q.pop();
        }
        return count;
    }
};