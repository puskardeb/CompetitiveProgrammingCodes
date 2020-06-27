class Solution {
public:
    int numSquares(int n) {
        int dp[n + 1];
        // memset(dp, 0, sizeof(dp));
        const int N = sqrt(INT_MAX);
        for (int i = 0; i <= n; ++i) {
            dp[i] = INT_MAX;
        }

        dp[0] = 0;
        for (int i = 1; i <= n; ++i) {
            for (int s = 1; s * s <= i; ++s) {
                // if (i >= s * s) {
                dp[i] = min(dp[i], dp[i - s * s] + 1);
                // }
            }
        }

        return dp[n];
    }
};
