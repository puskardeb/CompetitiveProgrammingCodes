class Solution {
    public int[] sortArrayByParity(int[] A) {
        final int n = A.length;
        int[] res = new int[n];
        int k = 0;
        
        for (int i = 0; i < n; ++i) {
            if (A[i] % 2 == 0) {
                res[k++] = A[i];
            }
        }
        
        for (int i = 0; i < n; ++i) {
            if (A[i] % 2 == 1) {
                res[k++] = A[i];
            }
        }
        
        return res;
    }
}
