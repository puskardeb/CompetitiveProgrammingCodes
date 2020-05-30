/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private int count;
    private int ans;
    
    private void dfs(TreeNode root, int k) {
        if (root == null)   return;
        dfs(root.left, k);
        {
            ++count;
            if (count == k) {
                ans = root.val;
                return;
            }
        }
        dfs(root.right, k);
    }
    
    public int kthSmallest(TreeNode root, int k) {
        count = 0;
        ans = 0;
        dfs(root, k);
        return ans;
    }
}
