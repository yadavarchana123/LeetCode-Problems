class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>>used; 
        priority_queue<int,vector<int>,greater<int>>unused;
        unordered_map<int,int>freq;
        sort(meetings.begin(),meetings.end());
        for(int j=0; j<n; j++)
        {       
           unused.push(j);
        }
        for(auto x : meetings)
        {
            int s= x[0], e=x[1];
            while(used.size()>0 and used.top().first <= s)
            {
                unused.push(used.top().second);
                used.pop();
            }
            if(unused.size() > 0)
            {
                int room = unused.top();
                unused.pop();
                used.push({e,room});
                freq[room]++;
            }
            else
            {
                long long end = used.top().first;
                int room = used.top().second;
                used.pop();
                end += e-s;
                used.push({end,room});
                freq[room]++;
            }
        }
        int maxi = INT_MIN,ans;
        for(auto x : freq)
        {
            if(x.second > maxi)
            {
                maxi = x.second;
                ans = x.first;
            }
            if(x.second == maxi)
            {
                ans = min(ans,x.first);
            }
        }
        return ans;
    }   
};