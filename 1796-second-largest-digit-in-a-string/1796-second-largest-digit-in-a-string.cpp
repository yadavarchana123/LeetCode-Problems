class Solution {
public:
    int secondHighest(string s) {
       priority_queue<int>q;
       for(auto x : s){
           if(isdigit(x))
           {
               q.push(x-'0');
           }
       }
        if(q.size() < 2) return -1;
        int x = q.top();
        q.pop();
        while(!q.empty() and x == q.top()) q.pop();
        if(q.empty()) return -1;
        return q.top();
    }
};