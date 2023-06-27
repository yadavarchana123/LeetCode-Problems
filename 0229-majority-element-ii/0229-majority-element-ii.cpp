class Solution {
public:
    //note: one thing we can notice here is that at most 2 element could be in the ans array bcz when we divide any no. with 3 modulo will be always less than 3. 
    vector<int> majorityElement(vector<int>& nums) {
        
        int cnd1 = -1, cnd2 = -1, cnt1 = 0, cnt2 = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == cnd1){
                cnt1++;
            }
            else if(nums[i] == cnd2){
                cnt2++;
            }
            else if(cnt1 == 0){
                cnd1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0){
                cnd2 = nums[i];
                cnt2 = 1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == cnd1){
                cnt1++;
            }
            else if(nums[i] == cnd2){
                cnt2++;
            }
        }
        vector<int>ans;
        if(cnt1 > nums.size()/3){
            ans.push_back(cnd1);
        }
        if(cnt2 > nums.size()/3){
            ans.push_back(cnd2);
        }
        return ans;
    }
};