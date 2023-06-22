class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>>ans(m,vector<int>(n));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                unordered_set<int>l, r;
                int t1 = i, t2 =j;
                while(t1-1 >= 0 and t2-1 >= 0){
                    l.insert(grid[t1-1][t2-1]);
                    t1--;
                    t2--;
                }
                t1 = i, t2 = j;
                while(t1+1 < m and t2+1 < n){
                   r.insert(grid[t1+1][t2+1]);
                    t1++;
                    t2++;
                }
                ans[i][j] = l.size()>r.size()?(l.size()-r.size()):(r.size()-l.size());
            }
        }
        return ans;
    }
};