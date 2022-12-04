class Solution {
public:
    bool isCircularSentence(string sentence) {
      int n = sentence.size(),i=0 ;
      if(sentence[0] != sentence[n-1]) return false;
      while(i < n)
      {
          while(i < n and sentence[i] != ' ')
          {
              i++;
          }
          
          if(i+1 < n and  sentence[i-1]!= sentence[i+1]) return false;
          i++;
      }
        return true;
    }
};