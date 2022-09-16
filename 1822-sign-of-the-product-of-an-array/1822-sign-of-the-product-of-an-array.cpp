class Solution {
public:
    int arraySign(vector<int>& nums) {
        int zero = 0, neg = 0;
        for(auto x : nums)
        {
            if(x == 0)
                zero++;
            if(x < 0)
                neg++;
        }
        if(zero) return 0;
        return neg % 2 ? -1 : 1;
    }
};