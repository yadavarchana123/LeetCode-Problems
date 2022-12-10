class Solution
{
    public:
        vector<string> sortPeople(vector<string> &names, vector<int> &heights)
        {
            vector<pair<int, int>> v;
            vector<string> s;
            for (int i = 0; i < heights.size(); i++)
            {
                v.push_back({ heights[i],
                    i });
            }
            sort(v.rbegin(), v.rend());
            for (auto x: v)
            {
                s.push_back(names[x.second]);
            }
            return s;
        }
};