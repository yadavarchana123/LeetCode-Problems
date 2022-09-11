class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
       int line[1002] = {};
       for(int i=0; i<trips.size(); i++)
       {
           int n = trips[i][0], s = trips[i][1], e = trips[i][2];
           line[s] += n;
           line[e] -= n;
       }
       for(int i = 1; i<1002; i++)
       {
           line[i] += line[i-1];
           if(line[i] > capacity || line[i-1] > capacity)
               return false;
       }
        return true;
    }
};