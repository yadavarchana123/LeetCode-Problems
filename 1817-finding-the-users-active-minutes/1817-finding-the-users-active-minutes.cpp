class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
      vector<int> answer(k,0);
      unordered_map<int,unordered_set<int>>mp;
        for(auto x : logs)
        {
            mp[x[0]].insert(x[1]);
        }
        for(auto x : mp)
        {
            answer[x.second.size()-1]++;
        }
        return answer;
    }
};