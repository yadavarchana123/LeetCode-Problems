class Solution {
public:
    string oddString(vector<string>& words) {
        int n = words[0].size(), cnt =0;
        vector<int>v(n-1,0);
        string ans = "";
        for(int i=1; i<words[0].size(); i++)
        {
            v[i-1] = words[0][i] - words[0][i-1];
        }
        for(int i=1; i<words.size(); i++)
        {  bool flag = false;
            for(int j=1; j<words[i].size(); j++)
            {
              int t = words[i][j] - words[i][j-1];
                if((t^v[j-1]) != 0)
                { 
                    flag = true;
                }
            } 
         if(flag)
         {
             cnt++;
             ans = words[i];
         }
        }
        if(cnt == words.size()-1)
         return words[0];
        return ans;
    }
};