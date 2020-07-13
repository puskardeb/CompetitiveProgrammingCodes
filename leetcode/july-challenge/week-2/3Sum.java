class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        Map<Integer, Integer> map = new HashMap<>();
        final int n = nums.length;
        Arrays.sort(nums);

        for (int i = 0; i < n; ++i) {
            map.put(nums[i], i);
        }

        for (int i = 0; i < n - 2; ++i) {
            int a = nums[i];
            for (int j = i + 1; j < n - 1; ++j) {
                int b = nums[j];
                int c = -(a + b);
                if (map.containsKey(c) && map.get(c) > j) {
                    res.add(Arrays.asList(a, b, c));
                    j = map.get(b);
                } 
                i = map.get(a);
            }
        }

        return res;
    }
}
