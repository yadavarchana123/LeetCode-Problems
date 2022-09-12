class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      int ans = 0; 
      for(int i=0; i<sentences.size(); i++)
      {
          int j =  0, count = 1;
          while(j<sentences[i].size())
          {
              if(sentences[i][j++]==' ')
                  count++;
          }
          ans = max(ans, count);
      }
    return ans;
    }
};