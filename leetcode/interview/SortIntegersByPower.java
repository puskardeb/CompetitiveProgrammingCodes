/* https://leetcode.com/problems/sort-integers-by-the-power-value/ */

class Solution {
    int[] dp;
    public Solution() {
        dp = new int[5 * (int)1e5];
        Arrays.fill(dp, 0);
    }
    public int recur(int x) {
        if (dp[x] == 0 && x != 1) {
            if (x % 2 == 0) {
                dp[x] = 1 + recur(x / 2);
            } else {
                dp[x] = 1 + recur(3 * x + 1);
            }
        }
        return dp[x];
    }

    public int getKth(int lo, int hi, int k) {
        int[][] res = new int[hi - lo + 1][2];
        for (int i = lo; i <= hi; ++i) {
            int a = recur(i);
            res[i - lo] = new int[]{a, i};
        }

        Arrays.sort(res, (a, b) -> a[0] - b[0]);
        // for (int[] x : res)
        //     System.out.println(Arrays.toString(x));
        return res[k - 1][1];
    }
}
