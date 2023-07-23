class Solution {
public:
    void helper(vector<long long>&temp, vector<int>& nums){
        for(auto x : nums){
            temp.push_back(x);
        }
    }
    long long maxArrayValue(vector<int>& nums) {
        if(nums.size() < 2)
            return nums[0];
        long long lsum =0, rsum =0, maxi; vector<long long>temp, temp1;
        helper(temp, nums);
        helper(temp1, nums);
        maxi = *max_element(nums.begin(), nums.end());
        for(int i=0; i<temp1.size()-1; i++){
            if(temp1[i] <= temp1[i+1]){
                 temp1[i+1] += temp1[i];
                 lsum = max(lsum, temp1[i+1]);
            }
        }
        for(int i=temp.size()-1; i > 0; i--){
            if(temp[i] >= temp[i-1]){
                 temp[i-1] += temp[i];
                 rsum = max(rsum,  temp[i-1]);
            }
        }
    
        return max(maxi,max(lsum,rsum));
    }
};