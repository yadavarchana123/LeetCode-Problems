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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)
            return ans;
        bool temp = false;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<int>v(n);
            for(int i=0; i<n; i++)
            {
             TreeNode* t = q.front();
             q.pop();
             if(t->left)
             {
                 q.push(t->left);
             }
             if(t->right)
             {
               q.push(t->right);     
             }
             if(!temp)
             {
                 v[i]=t->val;
             }
            else
            {
              v[n-i-1]=t->val;        
            }
            }
            ans.push_back(v);
            temp = !temp;
        }
        return ans;
    }
};