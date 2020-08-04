class Solution {
    public boolean isPowerOfFour(int num) {
        int n = num;
        
        return ((n & (n - 1)) == 0) && (n > 0) && ((n - 1) % 3) == 0;
        
        
        
        // if (n == 0) return false;
        // while (n % 4 == 0) {
        //     n /= 4;
        // }
        // // System.out.println(n);
        // return n == 1 ? true : false;
    }
}
