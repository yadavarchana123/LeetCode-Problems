/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        void helper(TreeNode *root, int pos, map<int, vector < int>> &mp)
        {
            if (root == NULL)
            {
                return;
            }
            queue<pair<TreeNode*, int>> q;
            q.push({ root,pos });

            while (!q.empty())
            {
                int n = q.size();
                multiset<pair<int,int>>s;
                for(int i=0; i<n; i++)
                {
                TreeNode *front = q.front().first;
                int position = q.front().second;
                s.insert({position,front->val});
                q.pop();
                if (front->left != NULL)
                {
                    q.push({ front->left,position - 1 });
                }
                if (front->right != NULL)
                {
                    q.push({ front->right,position + 1 });
                }
                }
                for(auto x : s)
                {
                    mp[x.first].push_back(x.second);
                }
            }
        }
    vector<vector < int>> verticalTraversal(TreeNode *root)
    {
        map<int, vector < int>> mp;
        helper(root, 0, mp);
        vector<vector < int>> ans;
        for (auto x: mp)
        {
           ans.push_back(x.second);
        }
        return ans;
    }
};