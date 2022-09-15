class Solution
{
    public:
        int minimumRounds(vector<int> &tasks)
        {
            unordered_map<int, int> mp;
            int ans = 0;
            for (auto x: tasks)
            {
                mp[x]++;
            }
            for (auto x: tasks)
            {
                int temp = mp[x];
                if(temp == 1)
                    return -1;
                while (temp % 3 != 0)
                {
                    temp -= 2;
                    ans++;
                }
                ans += temp / 3;
                mp.erase(x);
            }

            return ans;
        }
};