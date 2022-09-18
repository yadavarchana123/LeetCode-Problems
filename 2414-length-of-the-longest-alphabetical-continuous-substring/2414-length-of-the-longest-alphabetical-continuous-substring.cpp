class Solution {
public:
    int longestContinuousSubstring(string s) {
        if(s.size() == 1) return 1;
        int i=0, j=1, len =1;
        while( j < s.size()){
            if(s[j]-s[i]==j-i)
                j++;
            else
            {
                len = max(len , j-i);
                while(i<j and s[j]-s[i]!=j-i)
                    i++;
            }
        }
        len = max(len , j-i);
        return len;
    }
};