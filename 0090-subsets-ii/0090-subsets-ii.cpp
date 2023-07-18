class Solution {
public:
    vector<vector<int>> res;
    set<vector<int>>ans;
    void helper(int s, vector<int> arr, int n, vector<int>& temp){
        if( s >= n){
            sort(temp.begin(), temp.end());
            ans.insert(temp);
            return;
        }
        temp.push_back(arr[s]);
        helper(s+1,arr,n,temp);
        temp.pop_back();
        helper(s+1,arr,n,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<int>temp;
        sort(nums.begin(), nums.end());
        helper(0,nums,nums.size(), temp);
        for(auto x : ans){
           res.push_back(x); 
        }
        return res; 
    }
};