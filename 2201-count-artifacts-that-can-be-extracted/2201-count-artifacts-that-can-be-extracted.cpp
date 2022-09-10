class Solution {
    set<pair<int,int>>s;
public:
    bool helper(vector<int> v)
    {
        for(int i = v[0]; i<=v[2]; i++)
        {
           for(int j= v[1]; j<=v[3]; j++)
           {
              if(s.find({i,j}) == s.end())
                  return false;
           } 
        }
        return true;
    }
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig)     {
      int artifact = 0; 
      for(int i=0; i<dig.size(); i++)
      {
          s.insert({dig[i][0], dig[i][1]});
      }
      for(int i=0; i<artifacts.size(); i++)
      {
          if(helper(artifacts[i]))
              artifact++;
      }
        return artifact;
    }
};