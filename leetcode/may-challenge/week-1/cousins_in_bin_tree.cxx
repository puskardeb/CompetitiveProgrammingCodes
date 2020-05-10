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
    pair<int, TreeNode *> dfs(TreeNode *root, int v, int depth, TreeNode *parent) {
        if (root == NULL) {
            return {0, NULL};
        }
        if (root->val == v) {
            return {depth, parent};
        }
        
        pair<int, TreeNode *> p = dfs(root->left, v, depth + 1, root);
        if (p.first != 0) {
            return p;
        }
        p = dfs(root->right, v, depth + 1, root);
        return p;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        pair<int, TreeNode *> p1 = dfs(root, x, 0, NULL);
        pair<int, TreeNode *> p2 = dfs(root, y, 0, NULL);
        
        return (p1.first == p2.first && p1.second != p2.second);
    }
};
