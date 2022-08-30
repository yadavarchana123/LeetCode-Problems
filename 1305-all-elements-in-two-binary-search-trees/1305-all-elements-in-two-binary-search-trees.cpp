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
    
    void inorder(TreeNode* root, vector<int>&v)
    {
        if(!root)
            return;
        stack<TreeNode*>st;
        while(root || !st.empty())
        {
            while(root)
            {
                st.push(root);
                root = root->left;
            }
            root = st.top();
            st.pop();
            v.push_back(root->val);
            root = root->right;
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2,ans;
        inorder(root1,v1);
        inorder(root2,v2);
        int i=0, j=0;
        while(i < v1.size() and j<v2.size())
        {
            if(v1[i] < v2[j])
            {
                ans.push_back(v1[i++]);
            }
            else
            {
               ans.push_back(v2[j++]);  
            }
        }
        while(i<v1.size())
        {
             ans.push_back(v1[i++]);
        }
        while(j<v2.size())
        {
             ans.push_back(v2[j++]);
        }
        return ans;
    }
};