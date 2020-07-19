class Solution {
    public int[] findOrder(int numCourses, int[][] prerequisites) {
        Map<Integer, List<Integer>> graph = new HashMap<>();
        Queue<Integer> queue = new LinkedList<>();
        int[] inorder = new int[numCourses];
        int[] topoSort = new int[numCourses];
        
        for (int[] e : prerequisites) {
            int src = e[1];
            int dest = e[0];
            List<Integer> list = graph.getOrDefault(src, new ArrayList<Integer>());
            list.add(dest);
            graph.put(src, list);
            
            ++inorder[dest];
        }
        
        for (int i = 0; i < numCourses; ++i) {
            if (inorder[i] == 0) {
                queue.add(i);
            }
        }
        
        int i = 0;
        while(!queue.isEmpty()) {
            int node = queue.poll();
            topoSort[i++] = node;
            if (graph.containsKey(node)) {
                for (int j : graph.get(node)) {
                    --inorder[j];
                    if (inorder[j] == 0) {
                        queue.add(j);
                    }
                }
            }
        }
        
        return (i == numCourses) ? topoSort : new int[0];
        
    }
}
