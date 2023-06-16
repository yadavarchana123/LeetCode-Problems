class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<bool>row(n, false);
        vector<bool>col(m, false);
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
            {
                if(!matrix[i][j]){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(row[i] || col[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};