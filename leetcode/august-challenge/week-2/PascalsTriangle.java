class Solution {
    public List<Integer> getRow(int rowIndex) {
        int n = rowIndex;
        int k = rowIndex;
        
        List<Integer> list = new ArrayList<>();
        int[][] C = new int[n + 1][k + 1];
        C[0][0] = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j <= Math.min(i, k); ++j) {
                if (j == 0 || i == j)   C[i][j] = 1;
                else    C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
            }
        }
        
        for (int i = 0; i <= n; ++i) {
            list.add(C[n][i]);
        }
        
        return list;
    }
}
