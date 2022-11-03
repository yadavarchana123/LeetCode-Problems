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
    TreeNode* node ;
public:
    void helper(TreeNode* cloned, TreeNode* target)
    {
        if(!cloned or !target)
            return ;
        if(cloned->val == target->val)
        {
            node = cloned;
            return ;
        }
        helper(cloned->left, target);
        helper(cloned->right, target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!cloned) return NULL;
        helper(cloned, target);
        return node;
    }
};