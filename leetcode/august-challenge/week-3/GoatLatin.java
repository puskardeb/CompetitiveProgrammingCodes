class Solution {
    public boolean isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
    
    public String toGoatLatin(String S) {
        String[] arr = S.split(" ");
        StringBuilder[] a = new StringBuilder[arr.length];
        for (int i = 0; i < arr.length; ++i) {
            a[i] = new StringBuilder(arr[i]);
        }
        final int n = arr.length;
        
        for (int i = 0; i < n; ++i) {
            char c = a[i].charAt(0);
            if (!isVowel(c)) {
                a[i].deleteCharAt(0).append(c);
            }
            a[i].append("ma");
            for (int j = 0; j <=i; ++j) {
                a[i].append("a");
            }
        }
        
        StringBuilder res = new StringBuilder();
        for (StringBuilder s : a) {
            res.append(s).append(" ");
        }
        int l = res.length();
        res.deleteCharAt(l - 1);
        return res.toString();
    }
}
