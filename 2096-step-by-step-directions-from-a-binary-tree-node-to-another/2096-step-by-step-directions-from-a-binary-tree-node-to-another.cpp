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
    int LCA(TreeNode* root, int dest, string& path)
    {
        if(!root) return 0;
        if(root->val==dest) 
            return 1;
        if(root->left){
            path+="L";
            if(LCA(root->left,dest,path))
                return 1;
            path.pop_back();
        }
        if(root->right){
            path+="R";
            if(LCA(root->right,dest,path))
                return 1;
            path.pop_back();
        }
        return 0;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string path1="",path2="";
        LCA(root,startValue,path1);
        LCA(root,destValue,path2);
        int i=0, j=0;
        while(i<path1.size() and j<path2.size())
        {
            
            if(path1[i]==path2[j])
            {
                i++;
                j++;
            }
            else
                break;
        }
        string p1 = path1.substr(i);
        string p2 = path2.substr(j);
        for(int i=0; i<p1.size(); i++)
        {
           p1[i]='U'; 
        }
        return p1+p2;
    }
};