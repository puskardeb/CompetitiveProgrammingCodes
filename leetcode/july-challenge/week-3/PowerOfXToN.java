class Solution {
    public double myPow(double x, int n) {
        double ans = helper(x, Math.abs(n));
        return n < 0 ? 1 / ans : ans;
    }

    public double helper(double x, int n) {
        if (n == 0) return 1;
        if (n == 1) return x;

        double y = helper(x, n / 2);
        y *= y;
        if (n % 2 != 0) y *= x;

        return y;
    }
}
