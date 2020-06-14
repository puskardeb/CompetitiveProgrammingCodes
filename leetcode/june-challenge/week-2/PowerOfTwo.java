class Solution {
    public boolean isPowerOfTwo(int n) {
        if (n == Integer.MIN_VALUE)
            return false;
        
        int count = Integer.bitCount(n);
        return count == 1;
    }
}
