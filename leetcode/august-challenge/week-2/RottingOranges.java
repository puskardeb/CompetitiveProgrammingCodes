class Solution {

    public int orangesRotting(int[][] grid) {
        final int m = grid.length;
        final int n = grid[0].length;
        int countFresh = 0;

        Queue<int[]> q = new LinkedList<>();
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 2) {
                    q.add(new int[]{i, j});
                } else if (grid[i][j] == 1) {
                    ++countFresh;
                }
            }
        }
        
        if (countFresh == 0)    return 0;
        
        int[] xdir = {0, 0, -1, 1};
        int[] ydir = {1, -1, 0, 0};
        int mins = 0;
        
        while (!q.isEmpty()) {
            int sz = q.size();
            ++mins;

            for (int i = 0; i < sz; ++i) {
                int[] point = q.poll();
                for (int j = 0; j < 4; ++j) {
                    int x = point[0] + xdir[j];
                    int y = point[1] + ydir[j];
                    if (x >= 0 && x < m && y >= 0 && y < n) {
                        if (grid[x][y] == 1) {
                            grid[x][y] = 2;
                            q.add(new int[]{x, y});
                            --countFresh;
                        }
                    }
                }
            }
        }
        
        return countFresh == 0 ? mins - 1 : -1;
    }
}
