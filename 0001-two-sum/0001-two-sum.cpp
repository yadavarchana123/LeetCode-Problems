class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int>s;
        vector<int>v;
        for(int i=0;i<nums.size(); i++)
        {
            if(s.find(target-nums[i])!=s.end())
            {
                v.push_back(i);
                break;
            }
            s.insert(nums[i]);
        }
        int t = find(nums.begin(), nums.end(),target-nums[v[0]])-nums.begin();
        v.push_back(t);
        return v;
    }
};