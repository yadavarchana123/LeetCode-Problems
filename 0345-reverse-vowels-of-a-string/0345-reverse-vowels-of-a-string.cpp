class Solution {
public:
    
    bool isVowel(char c){
        if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
            return true;
        return false;
    }
    
    string reverseVowels(string s) {
        int i=0, j= s.size()-1;
        while( i <= j){
            if(isVowel(s[i])){
                while(j>i and !isVowel(s[j])){
                    j--;
                }
                if(j > i){
                    swap(s[i],s[j]);
                    j--;
                }
            }
            i++;
        }
         return s;
    }
};