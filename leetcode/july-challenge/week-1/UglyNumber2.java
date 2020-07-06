class Solution {
    public int nthUglyNumber(int n) {
        int i = 0, j = 0, k = 0;
        int twos = 2, threes = 3, fives = 5;

        int[] dp = new int[n];
        dp[0] = 1;

        for (int p = 1; p < n; ++p) {
            int min = Math.min(Math.min(twos, threes), fives);
            dp[p] = min;

            if (min == twos) {
                twos = 2 * dp[++i];
            }
            if (min == threes) {
                threes = 3 * dp[++j];
            }
            if (min == fives) {
                fives = 5 * dp[++k];
            }
        }

        return dp[n - 1];
    }
}
