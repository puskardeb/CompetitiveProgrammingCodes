class Solution {
    public int[][] reconstructQueue(int[][] people) {
        Arrays.sort(people, (a, b) -> a[0] == b[0] ? a[1] - b[1] : b[0] - a[0]);
        List<int[]> arr = new ArrayList<>();
        
        for (int[] a : people) {
            arr.add(a[1], a);
        }
        
        return arr.toArray(new int[arr.size()][]);
    }
}
