class Solution {
    typedef pair<int,int> p;
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<int>order; 
        priority_queue<p ,vector<p>,greater<p>>q; 
        for(int i=0; i<tasks.size(); i++)
        {
            tasks[i].push_back(i);
        }
        sort(tasks.begin(),tasks.end());
        long long top = 0, i=0;
        while(i<tasks.size() || !q.empty())
        {
            if(q.empty())
            {
                top = max(top, (long long)tasks[i][0]);
            }
            while(i<tasks.size() and top >= tasks[i][0])
            {
                q.push({tasks[i][1],tasks[i][2]});
                i++;
            }
            top += q.top().first;
            order.push_back(q.top().second);
            q.pop();
            
        }
        return order;
    }
};