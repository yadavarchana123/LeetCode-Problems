class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
       string num1 = "", num2 = "", sum = ""; 
       for(int i=0; i<firstWord.size(); i++)
       {
           num1 += firstWord[i]-'a'+ '0';
       }
        
       for(int i=0; i<secondWord.size(); i++)
       {
           num2 += secondWord[i]-'a'+ '0';
       }
       for(int i=0; i<targetWord.size(); i++)
       {
           sum += targetWord[i]-'a'+ '0';
       }
      return stoi(num1)+stoi(num2) == stoi(sum);
    }
};