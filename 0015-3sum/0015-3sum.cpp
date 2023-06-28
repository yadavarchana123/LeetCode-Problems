class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size() < 2)
            return ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            int t = -nums[i];
            int low = i+1, high = nums.size()-1;
            while(low < high){
                int sum = nums[low]+nums[high];
                if(sum > t)
                    high--;
                else if(sum < t){
                    low++;
                }
                else{
                    vector<int>temp = {nums[i], nums[low], nums[high]};
                    ans.push_back(temp);
                    while(low < high and nums[low] == temp[1])
                        low++;
                     while(low < high and nums[high] == temp[2])
                        high--;
                }
            }
               
            while(i+1 < nums.size() and nums[i]==nums[i+1])
                    i++;
        }
        return ans;
    }
};