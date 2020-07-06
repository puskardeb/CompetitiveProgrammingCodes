class Solution {
    public int[] plusOne(int[] digits) {
        final int n = digits.length;
        int[] ans;
        
        List<Integer> res = new ArrayList<>();
        for (int i : digits)    res.add(i);
        
        int carry = 0;
        res.set(n - 1, (digits[n - 1] + 1) % 10);
        carry = (digits[n - 1] + 1) / 10;
        
        if (carry > 0) {
            for (int i = n - 2; i >= 0; --i) {
                res.set(i, (digits[i] + carry) % 10);
                carry = (digits[i] + carry) / 10;
            }
        }
        if (carry > 0) {
            res.add(0, carry);
        }
        ans = new int[res.size()];
        int k = 0;
        for (int i : res) {
            ans[k++] = i;
        }
        return ans;
    }
}
