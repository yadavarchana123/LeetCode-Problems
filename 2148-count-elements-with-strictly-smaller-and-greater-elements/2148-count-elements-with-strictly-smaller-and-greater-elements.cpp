class Solution {
public:
    int countElements(vector<int>& nums) {
        
        int mx = *max_element(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        int n = count(nums.begin(),nums.end(),mx);
        int m = count(nums.begin(),nums.end(),mn);
        if(nums.size() < n+m)
            return 0;
        return nums.size()-(n+m);
    }
};