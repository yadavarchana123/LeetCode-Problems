/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   int minOperations(vector<int>&nums)
   {
       int ans=0;
	    vector<pair<int,int>>v;
	    for(int i=0; i<nums.size(); i++)
	    {
	        v.push_back({nums[i],i});
	    }
	    sort(v.begin(),v.end());
	    vector<bool>visited(nums.size(),false);
	    for(int i=0; i<nums.size(); i++)
	    {
	        if(visited[i] || v[i].second==i)
	        continue;
	        int len =0, j=i;
	        while(visited[j]==false)
	        {
	            visited[j]=true;
	            len++;
	            j = v[j].second;
	        }
	        ans+=len-1;
	    }
	    return ans;
	}
    int minimumOperations(TreeNode* root) {
        int op =0;
        if(!root) return 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<int>v;
            for(int i=0; i<n; i++)
            {
                TreeNode* curr = q.front();
                 q.pop();
                 v.push_back(curr->val);
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
            }
            op += minOperations(v);    
        }
        return op;
    }
};