class Solution {
public:
    bool checkOnesSegment(string s) {
        int c = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                c++;
                while(i<s.size() and s[i]=='1')
                {
                    i++;
                }
                if(c>1)
                    return false;
            }
        }
        return true;
    }
};