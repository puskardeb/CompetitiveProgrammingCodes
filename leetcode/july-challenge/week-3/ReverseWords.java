class Solution {
    public String reverseWords(String s) {
        String[] arr = s.trim().split(" ");
        StringBuilder sb = new StringBuilder();

        for (String str : arr) {
            if (!str.trim().isEmpty()) {
                sb.insert(0, " ");
                sb.insert(0, str);
            }
        }
        return sb.toString().trim();
    }
}
