/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        void reverse(TreeNode *from, TreeNode *to)
        {
            if (from == to)
                return;
            TreeNode *prev = from, *node = from->right;
            while (prev != to)
            {
                TreeNode *next = node->right;
                node->right = prev;
                prev = node;
                node = next;
            }
        }
    vector<int> postorderTraversal(TreeNode* root)
    {
        vector<int> out;
        if (root == NULL)
            return out;
        TreeNode *dummy = new TreeNode(-1), *pre = NULL;
        dummy->left = root;
        root = dummy;
        while (root)
        {
            if (root->left)
            {
                pre = root->left;
                while (pre->right && pre->right != root)
                    pre = pre->right;
                if (pre->right == NULL)
                {
                    pre->right = root;
                    root = root->left;
                }
                else
                {
                    TreeNode *node = pre;
                    reverse(root->left, pre);
                    while (node != root->left)
                    {
                        out.push_back(node->val);
                        node = node->right;
                    }
                    out.push_back(node->val);	// Print again since we are stopping at node=root.left
                    reverse(pre, root->left);
                    pre->right = NULL;
                    root = root->right;
                }
            }
            else
            {
                root = root->right;
            }
        }
        return out;
    }
};