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
    int res = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
       if(!root) return res;
       rangeSumBST(root->left,low,high);
       if(root->val >= low and root->val <= high)
           res += root->val;
       rangeSumBST(root->right,low,high);
      return res;
    }
};