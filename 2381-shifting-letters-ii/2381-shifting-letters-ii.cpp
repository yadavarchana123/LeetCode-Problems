class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int>line(s.size()+1,0);
        for(auto x : shifts)
        {
            if(x[2]==1)
            {
                line[x[0]]++;
                line[x[1]+1]--;
            }
            else
            {
                line[x[0]]--;
                line[x[1]+1]++;
            }
        }
        for(int i=1; i<=s.size(); i++)
        {
            line[i]+=line[i-1];
        }
        for(int i=0; i<s.size(); i++)
        {
          int increment = (s[i]-'a' + line[i])%26;
          if(increment < 0)
              increment = (increment + 26) % 26;
          s[i] = 'a' + increment;
        }
        return s;
    }
};