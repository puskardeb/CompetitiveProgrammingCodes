class Solution {
private:
    int ans;
public:
    void recur(TreeNode *root) {
        if (root == nullptr) {
            return;
        }
        ++ans;
        recur(root->left);
        recur(root->right);
    }

    int countNodes(TreeNode* root) {
        ans = 0;
        recur(root);
        return ans;
    }
};
