class Solution {
    int[] cumulativeSum;

    public Solution(int[] w) {
        cumulativeSum = new int[w.length];
        cumulativeSum[0] = w[0];
        for (int i = 1; i < w.length; ++i) {
            cumulativeSum[i] = cumulativeSum[i - 1] + w[i];
        }
    }
    
    public int pickIndex() {
        final int n = cumulativeSum.length;
        Random rng = new Random();
        
        // System.out.println(Arrays.toString(cumulativeSum));
        
        int rand = rng.nextInt(cumulativeSum[n - 1]) + 1;
        int idx = Arrays.binarySearch(cumulativeSum, rand);
        
        return idx < 0 ? (-idx - 1) : idx;
    }
}
