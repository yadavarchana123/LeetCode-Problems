class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
       int n = c.size();
       int x1=c[0][0], y1 =c[0][1], x2=c[1][0], y2=c[1][1];
       int dx = x2-x1, dy = y2-y1;
       for(auto t : c)
       {
         int x = t[0], y = t[1];
         if(dx * (y-y1) != dy * (x-x1))
              return false;
       }
        return true;
    }
};