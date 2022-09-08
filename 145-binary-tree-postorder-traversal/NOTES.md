# Using 1 Stack.
// O(n) Time & O(n) Space
This is similar to Inorder using 1 Stack. The difference is we keep track of the previously printed node in pre. And we only print a node if its right child is null or equal to pre.
# ALGORITHM
Push all left nodes into the stack till it hits NULL.
root = s.top()
if root->right = NULL or pre (Means we have traversed the right subtree already)
We print root and pop it from s.
Make pre = root
root = NULL (So we dont go down to left child again)
else
root = root->right (Traverse the right subtree before printing root)
Keep iterating till both the below conditions are met -Stack is empty and Root is NULL.
# CODE
```
vector<int> postorderTraversal(TreeNode* root) {
		vector<int> out;
		if(root==NULL)
			return out;
		TreeNode* pre=NULL;
		stack<TreeNode*> s;      
		while(root || !s.empty()){
			if(root){				
				s.push(root);
				root = root->left;
			}
			else{
				root = s.top();
				if(root->right==NULL || root->right==pre){
				    out.push_back(root->val);
				    s.pop();
				    pre=root;
				    root = NULL;
				}
				else
				    root = root->right;
			}
		}
		return out;
	}
  ```
  # Using No Stacks (Morris Traversal). O(n) Time & O(1) Space
  Instead of using stacks to remember our way back up the tree, we are going to modify the tree to create upwards links. 
  We reverse each diagonal shown in the picture (d1-d4), print it and re-reverse it.
  # ALGORITHM
Create a dummy node and make dummy->left = root.
root = dummy
Iterate till root is null.
If root has a left child.
Find the inorder predecessor => pre. (Inorder predecessor of root is the right most child of its left child)
pre.right = root (Make it point to root).
root = root->left.
If its already pointing to root (which means we have traversed it already and are on our way up.)
Reverse from root->left to pre.
Traverse from pre to root.left and print the nodes.
Re-reverse it back to normal.
pre->right = NULL.
root = root->right.
If left child is null
root = root->right. (We are climbing up our link.)

# CODE
```
vector<int> postorderTraversal(TreeNode* root) {
	vector<int>  out;
	if(root == NULL)
		return out;
	TreeNode* dummy = new TreeNode(-1), *pre = NULL;
	dummy->left = root; root = dummy;
	while(root ){
		if(root->left ){
			pre = root->left;
			while(pre->right && pre->right != root)
				pre=pre->right;
			if(pre->right == NULL){
				pre->right = root;
				root = root->left;
			}
			else{
				TreeNode* node = pre;
				reverse(root->left,pre);
				while(node != root->left){
					out.push_back(node->val);
					node = node->right;
				}
				out.push_back(node->val);          // Print again since we are stopping at node=root.left
				reverse(pre,root->left);
				pre->right = NULL;
				root = root->right;
			}
		}
		else{
			root = root->right;
		}
	}
	return out;
}

void reverse(TreeNode* from, TreeNode* to){
    if(from == to)
        return;
    TreeNode* prev = from, *node = from->right;
    while(prev != to){
        TreeNode* next = node->right;
        node->right = prev;
        prev = node;
        node = next;
    }
} 
```
