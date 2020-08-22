class Solution {
    public int titleToNumber(String s) {
        char[] str = s.toCharArray();
        final int n = str.length;
        int res = 0;
        int k = 0;
        for (int i = 0; i < n; ++i) {
             res = res * 26 + (str[i] - 'A' + 1);
        }
        return res;
    }
}
