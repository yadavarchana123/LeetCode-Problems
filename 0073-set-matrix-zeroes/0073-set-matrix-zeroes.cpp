class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<bool>row(m,false), col(n,false);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] == 0){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(row[i] || col[j] ){
                   mat[i][j] = 0;
                }
            }
        }
    }
};