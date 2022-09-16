class Solution {
public:
    string truncateSentence(string s, int k) {
       string word = "",sentence = "";
       for(int i=0; i<s.size(); i++)
       {  
           while(i<s.size() and s[i] != ' '){
              word += s[i++]; 
           }
           k--;
           if(k==0) break;
           sentence += word + " ";  
           word = "";
       }
        sentence += word;
        return sentence;
    }
};