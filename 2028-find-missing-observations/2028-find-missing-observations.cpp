class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = 0, m=0;
        for(auto x : rolls)
        {
            sum += x;
            m++;
        }
        int missing_sum = (m+n)*mean - sum;
        if(missing_sum < n || missing_sum > 6*n)
            return {};
        int part = missing_sum/n, rem = missing_sum % n;
        vector<int>ans(n, part);
        for(int i=0; i<rem; i++)
        {
            ans[i]++;
        }
        return ans;
    }
};