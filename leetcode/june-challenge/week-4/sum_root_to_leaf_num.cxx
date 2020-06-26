class Solution {
private:
    vector<string> v;
public:
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        return recur(root, sum);
    }

    int recur(TreeNode *root, int s) {
        if (root == nullptr) {
            return 0;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return s * 10 + root->val;
        }
        int left = recur(root->left, s * 10 + root->val);
        int right = recur(root->right, s * 10 + root->val);

        return left + right;
    }
};
