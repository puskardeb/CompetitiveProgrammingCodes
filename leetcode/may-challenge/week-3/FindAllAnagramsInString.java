class Solution {
    
    private boolean isAnagram(char[] a, char[] b) {
        int[] freq = new int[26];
        
        for (char c : a) {
            ++freq[c - 'a'];
        }
        
        for (char c : b) {
            --freq[c - 'a'];
        }
        
        for (int i : freq) {
            if (i != 0)
                return false;
        }
        return true;
    }
    
    public List<Integer> findAnagrams(String s, String p) {
        char[] pch = p.toCharArray();
        char[] sch = s.toCharArray();
        List<Integer> list = new ArrayList<>();
        
        
        for (int i = 0; i < sch.length - pch.length + 1; ++i) {
            char[] tmp = Arrays.copyOfRange(sch, i, i + pch.length);
            if (isAnagram(tmp, pch)) {
                list.add(i);
            }
        }
        return list;
    }
}
