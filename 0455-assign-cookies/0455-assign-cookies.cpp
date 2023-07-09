class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int cnt = 0, j=0;
        for(int i=0; i<g.size() and j<s.size(); ){
            if(s[j] >= g[i]){
                cnt++;
                j++;
                i++;
            }
            else{
                while(j < s.size() and s[j] < g[i])
                    j++;
            }
        }
        return cnt;
    }
};