// https://leetcode.com/problems/subsets/
// Iterative 
vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res ={{}};
        for(auto x: nums)
        {
            int n = res.size();
            for(int i=0; i<n; i++)
            {
                res.push_back(res[i]);
                res.back().push_back(x);
            }
        }
        return res;
    }

// Recursive

void solve(vector<int>& nums, int n,  vector<vector<int>>&res, vector<int>v )
    {
      if(n >= nums.size()) 
      {
          res.push_back(v);
          return ;
      }
       solve(nums, n+1, res, v);
       v.push_back(nums[n]);
       solve(nums, n+1, res, v);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>v={};
        solve(nums,0,res,v);
        return res;
    }


// Backtracking

void sbst(int ind,vector<int>vec,vector<vector<int>>&ans,vector<int> temp){
	if(ind >= vec.size()){
		ans.push_back(temp);
		return;
	}

	temp.push_back(vec[ind]);
	sbst(ind+1,vec,ans,temp);
	temp.pop_back();
	sbst(ind+1,vec,ans,temp);


}


class Solution {
public:
	vector<vector<int>> subsets(vector<int>& vec) {
	   vector<vector<int>> ans;
	   int ind = 0;
		vector<int> temp;

		sbst(ind,vec,ans,temp);

		return ans;


	}
};
