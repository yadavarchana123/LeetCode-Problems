class Solution {
public:
    
    bool dfs(int i, int j, string word,vector<vector<char>>& board,int n )
    {
        if(n == word.size())
            return true;
        if(i<0 or i>=board.size() or j<0 or j>= board[0].size() or board[i][j] != word[n] )
            return false;
          
         board[i][j] = '0';
         bool res = dfs(i-1,j,word,board,n+1) || 
                    dfs(i+1,j,word,board,n+1) || 
                    dfs(i,j-1,word,board,n+1) || 
                    dfs(i,j+1,word,board,n+1);
            
        board[i][j]=word[n];
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        if(word == "")
            return false;
        int n = board.size();
        int m = board[0].size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j]==word[0])
                {
                    if(dfs(i,j,word,board,0))
                        return true;
                }
            }
        }
        return false;
    }
};