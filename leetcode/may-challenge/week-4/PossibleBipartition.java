class Solution {
    Map<Integer, Set<Integer>> g;
    int[] color;

    public boolean dfs(int start, int c) {
        if (color[start] != -1) {
            return color[start] == c;
        }
        color[start] = c;
        if (g.get(start) == null)   return true;
        for (int n : g.get(start)) {
            if (!dfs(n, c ^ 1)) {
                return false;
            }
        }
        return true;
    }

    public boolean possibleBipartition(int N, int[][] dislikes) {
        if (dislikes.length < 2)    return true;

        g = new HashMap<>();
        color = new int[N + 1];
        Arrays.fill(color, -1);

        for (int[] a : dislikes) {
            int u = a[0];
            int v = a[1];

            g.putIfAbsent(u, new HashSet<>());
            g.putIfAbsent(v, new HashSet<>());
            g.get(u).add(v);
            g.get(v).add(u);
        }

        for (int node = 1; node <= N; ++node) {
            if (color[node] == -1 && !dfs(node, 0)) {
                return false;
            }
        }        
        return true;
    }
}
