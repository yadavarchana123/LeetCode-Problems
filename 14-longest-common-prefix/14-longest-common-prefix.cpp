class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        string res = "", a= s[0], b = s[s.size()-1];
        for(int i=0, j=0; i<a.size() and j<b.size(); )
        {
            if(a[i]==b[j])
            {
                res+=a[i];
                i++;
                j++;
            }
            else
                break;
        }
        return res;
    }
};