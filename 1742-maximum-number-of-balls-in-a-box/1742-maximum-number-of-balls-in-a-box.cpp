class Solution {
public:
    int sumOfDigits(int n)
    {
        int sum = 0;
        while(n)
        {
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mp;
        int ans = 0;
        for(int i=lowLimit; i<=highLimit; i++)
        {
            int idx = sumOfDigits(i);
            mp[idx]++;
            ans = max(ans, mp[idx]);
        }
        return ans;
    }
};