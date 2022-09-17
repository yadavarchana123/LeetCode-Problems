class Solution {
public:
    int maxRepeating(string sequence, string word) {
       int maxi = 0; string s = word;
       while(word.size() <= sequence.size()){
           if(sequence.find(word) == string::npos)
               return maxi;
           word += s;
           maxi++;
       }
      return maxi;
    }
};