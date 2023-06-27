class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        if(nums.size() < 4){
            return res;
        }
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            long long t1 = target-nums[i];
            for(int j=i+1; j<nums.size(); j++){
                long long t2 = t1-nums[j];
                long long low = j+1;
                long long high = nums.size()-1;
                while(low < high){
                    long long sum = nums[low]+nums[high];
                    if(sum > t2){
                        high--;
                    }
                    else if(sum < t2){
                        low++;
                    }
                    else{
                        vector<int>temp({nums[i],nums[j],nums[low],nums[high]});
                        res.push_back(temp);
                        while(low < high and nums[low] == temp[2]){
                            low++;
                        }
                         while(low < high and nums[high] == temp[3]){
                            high--;
                        }
                    }
                }
                while(j+1<nums.size() and nums[j]==nums[j+1]){
                    j++;
                }
            }
            while(i+1<nums.size() and nums[i]==nums[i+1]){
                    i++;
            }
        }
        return res;
    }
};