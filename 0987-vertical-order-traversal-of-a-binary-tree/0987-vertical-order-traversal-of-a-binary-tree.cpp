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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
         vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        map<int,map<int,multiset<int>>>mp; // vertical,(level,values)
        queue<pair<TreeNode*,pair<int,int>>>q; //  (root,{vertical,level})
        q.push({root,{0,0}});
        while(!q.empty()){
            TreeNode* curr = q.front().first;
            int ver = q.front().second.first;
            int lvl = q.front().second.second;
            q.pop();
            mp[ver][lvl].insert(curr->val);
            if(curr->left){
                q.push({curr->left,{ver-1,lvl+1}});
            }
            if(curr->right){
                q.push({curr->right,{ver+1,lvl+1}});
            }
        }
        for(auto x : mp){
            vector<int>temp;
            for(auto y : x.second){
                for(auto z : y.second){
                    temp.push_back(z);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};