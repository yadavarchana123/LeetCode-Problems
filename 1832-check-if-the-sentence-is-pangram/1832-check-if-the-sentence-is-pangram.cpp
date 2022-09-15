class Solution {
public:
    bool checkIfPangram(string sentence) {
      int alphabets[26]={};
      for(auto x : sentence)
      {
          alphabets[x-'a']++;
      }
     for(int i=0; i<26; i++)
     {
         if(alphabets[i]==0)
             return false;
     }
    return true;
    }
};