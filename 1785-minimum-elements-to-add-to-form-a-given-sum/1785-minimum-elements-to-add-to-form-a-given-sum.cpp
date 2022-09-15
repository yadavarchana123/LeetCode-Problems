class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum = 0, count = 0;
        for(auto x : nums)
        {
            sum += x;
        }
        if(sum == goal)
            return 0;
        double diff = abs(sum - goal);
        
        if(diff <= limit)
            return 1;
        return ceil(diff/limit);
        
    }
};