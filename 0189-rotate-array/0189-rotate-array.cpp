class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int m=n-k%n;
        reverse(nums.begin(), nums.begin()+m);
        reverse(nums.begin()+m,nums.end());
        reverse(nums.begin(), nums.end());
        
    }
};