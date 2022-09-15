class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> c;
        int res = 0;
        for (int x: tasks)
             c[x]++;
        for (auto& it: c) {
            if (it.second == 1) return -1;
            res += (it.second + 2) / 3;
        }
        return res;
    }
};