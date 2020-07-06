class Solution {
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        
        List<List<Integer>> ans = new ArrayList<>();
        if (root == null)   return ans;
        Queue<TreeNode> queue = new LinkedList<>();
        
        queue.add(root);
        while (!queue.isEmpty()) {
            int sz = queue.size();
            List<Integer> list = new ArrayList<>();
            for (int i = 0; i < sz; ++i) {
                TreeNode node = queue.poll();
                if (node.left != null)  queue.add(node.left);
                if (node.right != null) queue.add(node.right);
                list.add(node.val);
            }
            ans.add(list);
        }
        Collections.reverse(ans);
        
        return ans;
    }
}
