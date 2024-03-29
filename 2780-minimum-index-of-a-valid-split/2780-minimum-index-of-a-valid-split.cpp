class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int freq = 0, elm;
        unordered_map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
            if(freq < mp[x]){
                freq = mp[x];
                elm = x;
            }
        }
    
        int cnt = 0, m = nums.size();
        for(int i = 0; i < m; i++){
            if(nums[i] == elm){
                cnt++ ;
                mp[nums[i]]--;
                if((cnt*2) > i+1 and (mp[nums[i]]*2) > (m-i-1)){
                    return i;
                } 
            }
        }
        return -1;
    }
};