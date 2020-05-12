class Solution {
    int ans;
public:
    int singleNonDuplicate(vector<int>& nums) {
        const int n = nums.size();
        int lo = 0;
        int hi = n - 1;

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == nums[mid ^ 1]) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }

        return nums[lo];
    }
    
    /*
    Divide and conquer -> O(n)
    int singleNonDuplicate(vector<int>& nums) {
        ans = 0;
        const int n = nums.size();
        recur(0, n - 1, nums);
        return ans;
    }

    void recur(int left, int right, vector<int>& nums) {
        if (left == right) {
            ans ^= nums[left];
            return;
        }
        int mid = left + (right - left)/2;
        recur(left, mid, nums);
        recur(mid + 1, right, nums);
    }*/
};
