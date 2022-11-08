class Solution {
public:
    string makeGood(string s) {
        int i=0;
        while(i<s.size()-1 )
        {  
            if(s[i]==s[i+1]-32 || s[i]-32 == s[i+1])
            {
                s.erase(i,2);
                i = max(-1, i-2);
                if(s.size() < 2)
                    return s;
            }
            i++;
        }
        return s;
    }
};