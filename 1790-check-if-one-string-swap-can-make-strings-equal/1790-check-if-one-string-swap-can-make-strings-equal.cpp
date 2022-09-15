class Solution {
public:
    bool Anagram(string s1, string s2){
        int freq[26]={};
        for(int i=0; i<s1.size(); i++)
        {
            freq[s1[i]-'a']++;
            freq[s2[i]-'a']--;
        }
        for(int i=0; i<26; i++)
        {
            if(freq[i]) return false;
        }
        return true;
    }
    bool areAlmostEqual(string s1, string s2) {
        int c = 0;
        if(!Anagram(s1,s2)) return false;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i] != s2[i])
                c++;
            if(c > 2)
                return false;
        }
        return true;
    }
};