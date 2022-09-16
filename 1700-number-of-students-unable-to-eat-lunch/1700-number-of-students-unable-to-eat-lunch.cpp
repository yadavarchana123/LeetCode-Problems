class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       queue<int>q; stack<int>s;
       for(auto x : students) q.push(x);
       for(int i=sandwiches.size()-1; i>=0; i-- ){
           s.push(sandwiches[i]);
       }
      while(!q.empty())
      {
          if(q.front()==s.top())
          {
             
              q.pop();
              s.pop();
              
          }
          int cnt = 0, n = q.size();
          while(!q.empty() and q.front() != s.top() and cnt < n)
          {
              q.push(q.front());
                  q.pop();
              cnt++;
          }
          if(!q.empty() and q.front() != s.top()) return q.size();
      }
        return 0;
    }
};