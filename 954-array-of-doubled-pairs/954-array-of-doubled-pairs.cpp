class Solution
{
    public:
        bool canReorderDoubled(vector<int> &arr)
        {
            int n = arr.size();
            vector<int> ans;
            unordered_map<int, int> mp;
            sort(arr.begin(), arr.end());
            for (auto x: arr)
            {
                mp[x]++;
            }
            for (auto x: arr)
            {
                if (mp.find(x) != mp.end())
                {
                    mp[x]--;
                    if (mp[x] == 0)
                        mp.erase(x);
                    if (mp.find(2 *x) != mp.end())
                    {

                        ans.push_back(x);
                        mp[2 *x]--;
                        if (mp[2 *x] == 0)
                            mp.erase(2 *x);
                    }
                    else if (x%2==0 and mp.find(x / 2) != mp.end())
                    {

                        ans.push_back(x);
                        mp[x / 2]--;
                        if (mp[x / 2] == 0)
                            mp.erase(x / 2);
                    }
                }
            }
            if (ans.size() == n / 2)
                return true;
            return false;
        }
};