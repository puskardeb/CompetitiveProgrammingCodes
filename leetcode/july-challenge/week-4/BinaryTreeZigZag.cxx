class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        vector<vector<int>> res;
        
        if (root == nullptr)    return res;
        
        q.push(root);
        while (q.size() > 0) {
            int sz = q.size();
            vector<int> v;
            for (int i = 0; i < sz; ++i) {
                TreeNode *node = q.front();
                q.pop();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
                v.push_back(node->val);
            }
            res.push_back(v);
        }
        
        for (int i = 0; i < res.size(); ++i) {
            if (i % 2 != 0) {
                reverse(res[i].begin(), res[i].end());
            }
        }
        
        return res;
    }
};
