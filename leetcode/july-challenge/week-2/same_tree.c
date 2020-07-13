bool isSameTree(struct TreeNode* p, struct TreeNode* q){

    if (p == NULL && q == NULL) {
        return 1;
    }

    if ((p == NULL && q) || (p && q == NULL)) {
        return 0;
    }

    if (p->val == q->val) {
        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);
        return left && right;
    }

    return 0;
}
