class Solution {
    public int majorityElement(int[] nums) {
        final int n = nums.length;
        Map<Integer, Integer> map = new HashMap<>();

        for (int i : nums) {
            map.put(i, map.getOrDefault(i, 0) + 1);
        }

        for (Map.Entry<Integer, Integer> e : map.entrySet()) {
            if (e.getValue() > n/2) {
                return e.getKey();
            }
        }
        return -1;
    }
}
