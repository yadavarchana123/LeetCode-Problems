class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long>q(nums.begin(),nums.end());
        long long ans = 0;
        while(k)
        {
            long long temp = q.top();
            q.pop();
            ans += temp;
            q.push(ceil(temp/3.0));
            
            k--;
        }
        return ans;
    }
};