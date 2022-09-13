class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
       int n = times.size();
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>occupied;
        priority_queue<int,vector<int>,greater<int>>free;
        int chair = 0;
        for(int i=0; i<n; i++)
        {
            times[i].push_back(i);
        }
        sort(times.begin(), times.end());
        for(int i=0; i<n; i++)
        {
            int arrival = times[i][0];
            int departure = times[i][1];
            int seat = times[i][2];
            while(!occupied.empty() and occupied.top().first <= arrival)
            {
                free.push(occupied.top().second);
                occupied.pop();
            }
            if(free.empty())
            {
              if(seat == targetFriend)
                return chair;
              occupied.push({departure,chair});
              chair++;
            }
            else
            {
              int s = free.top();
              if(seat == targetFriend)
                return s;
              occupied.push({departure,s});
                free.pop();
            }
        }
        return -1;
    }
};