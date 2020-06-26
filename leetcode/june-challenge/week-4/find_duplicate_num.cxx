class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast_ptr = nums[0];
        int slow_ptr = nums[0];

        do {
            slow_ptr = nums[slow_ptr];
            fast_ptr = nums[nums[fast_ptr]];
        } while (fast_ptr != slow_ptr);

        slow_ptr = nums[0];

        while (slow_ptr != fast_ptr) {
            slow_ptr = nums[slow_ptr];
            fast_ptr = nums[fast_ptr];
        }

        return fast_ptr;
    }
};
