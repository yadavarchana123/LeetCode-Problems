class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int line[1000005] = {};
        for(int i = 0; i<intervals.size(); i++)
        {
          int s = intervals[i][0], e = intervals[i][1];
            line[s]++;
            line[e+1]--;
        }
        int ans = -1;
        for(int i=1; i<1000005; i++)
        {
            line[i] += line[i-1];
            ans = max(ans, line[i]);
        }
        return ans;
    }
};