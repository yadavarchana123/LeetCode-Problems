class Solution
{
    public:
        vector<vector < int>> findDifference(vector<int> &nums1, vector<int> &nums2)
        {
            vector<vector < int>> answer;
            unordered_set<int> s(nums2.begin(), nums2.end());
            vector<int> temp;
            for (auto x: nums1)
            {
                if (s.find(x) == s.end())
                {
                    if (!count(temp.begin(),temp.end(),x))
                        temp.push_back(x);
                }
            }
            answer.push_back(temp);
            temp.clear();
            s.clear();
            for (auto x: nums1)
            {
                s.insert(x);
            }

            for (auto x: nums2)
            {
                if (s.find(x) == s.end())
                {
                     if (!count(temp.begin(),temp.end(),x))
                        temp.push_back(x);
                }
            }
            answer.push_back(temp);
            return answer;
        }
};