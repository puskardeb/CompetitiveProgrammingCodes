class Solution {
    public int change(int amount, int[] coins) {
        int n = coins.length;
        // int n = (int)1e5 + 1;
        int[][] dp = new int[amount + 1][n + 1];
        
        for (int i = 0; i <= n; ++i) {
            dp[0][i] = 1;
        }
            
        for (int i = 1; i <= amount; ++i) {
            for (int j = 1; j <= n; ++j) {
                dp[i][j] = dp[i][j - 1] + ((i >= coins[j - 1]) ? dp[i - coins[j - 1]][j] : 0);
            }
        }
            
            
            
        return dp[amount][n];
    }
}
