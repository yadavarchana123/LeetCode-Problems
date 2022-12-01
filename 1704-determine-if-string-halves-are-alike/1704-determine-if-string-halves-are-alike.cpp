class Solution {
public:
    bool isVowel(char c)
    {
        if(c=='a' || c=='A' || c=='e' || c=='E' ||c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
            return true;
        return false;
    }
    bool halvesAreAlike(string s) {
     int i=0, j= s.size()-1,cnt=0;
     while(i<j)
     {
         if(isVowel(s[i]))
             cnt++;
         if(isVowel(s[j]))
             cnt--;
         i++;
         j--;
     }
     return cnt==0;
    }
};