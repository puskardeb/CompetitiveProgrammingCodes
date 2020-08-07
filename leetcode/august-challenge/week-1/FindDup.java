class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        int[] freq = new int[nums.length + 1];
        for (int i : nums) {
            ++freq[i];
        }
        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < freq.length; ++i) {
            if (freq[i] == 2) {
                list.add(i);
            }
        }
        
        return list;
    }
}
