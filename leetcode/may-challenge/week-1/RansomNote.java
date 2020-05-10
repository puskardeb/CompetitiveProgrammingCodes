class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        char[] a = ransomNote.toCharArray();
        char[] b = magazine.toCharArray();

        int[] map = new int[26];

        Arrays.fill(map, 0);

        for (char c : b) {
            ++map[c - 'a'];
        }

        for (char c : a) {
            --map[c - 'a'];
        }

        for (int i : map) {
            if (i < 0)
                return false;
        }

        return true;
    }
}
