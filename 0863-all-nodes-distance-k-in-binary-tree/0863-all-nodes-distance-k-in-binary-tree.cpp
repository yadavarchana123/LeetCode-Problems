/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root,  unordered_map<TreeNode*,TreeNode*>& mp)
    {
        if(!root)
            return ;
        if(root->left)
            mp[root->left]=root;
        if(root->right)
            mp[root->right]=root;
        dfs(root->left,mp);
        dfs(root->right,mp);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        if(!root)
            return ans;
        unordered_map<TreeNode*,TreeNode*>mp;   // {current, parent}
        dfs(root,mp);
        queue< TreeNode*>q;
        unordered_map< TreeNode*, bool> visited;
        q.push(target);
        while(!q.empty())
        {
            int n = q.size();
            for(int i=0; i<n; i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                visited[curr]=true;
                if(k == 0)
                {
                    ans.push_back(curr->val);
                }
                if(curr->left and !visited[curr->left])
                {
                    q.push(curr->left);
                    visited[curr->left]=true;
                }
                if(curr->right and !visited[curr->right])
                {
                    q.push(curr->right);
                     visited[curr->right]=true;
                }
                if(mp.find(curr) != mp.end() and !visited[mp[curr]])
                {
                    q.push(mp[curr]);
                     visited[mp[curr]]=true;
                }
            }
            k--;
            if( k< 0)
                break;
        }
        return ans;
    }
};