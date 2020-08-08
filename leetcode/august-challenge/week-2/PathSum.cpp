/*
					  10
					 /  \
					5   -3
				   / \    \
				  3   2   11
				 / \   \
				3  -2   1 
 */



class Solution {
public:
	int dfs(TreeNode *root, int sum) {
		if (!root)	return 0;
		
		int left = dfs(root->left, sum - root->val);
		int right = dfs(root->right, sum - root->val);
		
		return (root->val == sum) + left + right;
		
	}

	int pathSum(TreeNode* root, int sum) {
		if (!root)	return 0;
		return dfs(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum); 
	}
};
