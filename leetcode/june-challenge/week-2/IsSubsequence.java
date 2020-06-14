class Solution {
    public boolean isSubsequence(String s, String t) {
        char[] s1 = s.toCharArray();
        char[] s2 = t.toCharArray();
        // int i = 0;
        int j = 0;
        
        for (int i = 0; i < s2.length; ++i) {
            if (j >= s1.length) break;
            if (s2[i] == s1[j]) {
                ++j;
            }
        }
        
        return (j == s1.length);
    }
}
