class Solution {
    public int searchInsert(int[] nums, int target) {
        final int n = nums.length;
        
        int lo = 0;
        int hi = n;
        
//         int idx = Arrays.binarySearch(nums, target);
        
//         return idx < 0 ? (-idx - 1) : idx;
        
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        
        return lo;
    }
}
