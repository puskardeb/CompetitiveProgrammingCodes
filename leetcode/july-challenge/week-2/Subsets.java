class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        final int n = nums.length;
        List<List<Integer>> res = new ArrayList<>();

        for (int mask = 0; mask < (1 << n); ++mask) {
            List<Integer> list = new ArrayList<>();
            for (int i = 0; i < n; ++i) {
                if ((mask & (1L << i)) != 0) {
                    list.add(nums[i]);
                }
            }
            res.add(list);
        }

        return res;
    }
}
