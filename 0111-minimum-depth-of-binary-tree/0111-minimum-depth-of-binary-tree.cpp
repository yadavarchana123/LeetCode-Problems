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
    int helper(TreeNode* root){
        if(!root)
            return 1e5+7;
       
        if(!root->left and !root->right)
            return 1;
        int l = helper(root->left);
        int r = helper(root->right);
        return 1+min(l,r);
    }
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        return helper(root);
        
    }
};