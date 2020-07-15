public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        int sum = 0;
        for (int i = 30, k = 1; i >= 0; --i, ++k) {
            if ((n & (1 << i)) != 0) {
                sum += (1 << k);
            }
        }
        sum += (n < 0) ? 1 : 0;
        return sum;
    }
}
