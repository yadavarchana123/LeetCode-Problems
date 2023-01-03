class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0, lower=0, pos ;
        for(int i=0; i<word.size(); i++)
        {
            if(isupper(word[i]))
            {
                pos = i;
                upper++;
            }
            else
                lower++;
        }
        if(upper == word.size() || lower == word.size()) return true;
        return pos==0;
    }
};