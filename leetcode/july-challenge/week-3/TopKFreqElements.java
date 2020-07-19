class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> map = new HashMap<>();
        Queue<Integer> pq;
        int[] res = new int[k];
        
        if (k == nums.length) {
            return nums;
        }
        
        for (int i : nums) {
            map.put(i, map.getOrDefault(i, 0) + 1);
        }
        
        pq = new PriorityQueue<>((n1, n2) -> map.get(n1) - map.get(n2));
        
        for (int n : map.keySet()) {
            pq.add(n);
            if (pq.size() > k) {
                pq.poll();
            }
        }
        
        for (int i = k - 1; i >= 0; --i) {
            res[i] = pq.poll();
        }
        
        return res;
    }
}
