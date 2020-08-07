class Solution {
private:
    map<int, map<int, set<int>>> hash;
    int x_coord, y_coord;
public:
    void dfs(TreeNode *node, int x, int y) {
        if (node == nullptr)    return;
        hash[x][y].insert(node->val);
        dfs(node->left, x - 1, y - 1);
        dfs(node->right, x + 1, y - 1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        x_coord = 0;
        y_coord = 0;
        dfs(root, x_coord, y_coord);
        for (auto p : hash) {
            vector<int> tmp;
            for (auto q : p.second) {
                tmp.insert(tmp.begin(), q.second.begin(), q.second.end());
            }
            res.push_back(tmp);
        }
        return res;
    }
};
