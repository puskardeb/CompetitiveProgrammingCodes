class Solution {
    public String reverseWords(String s) {
        String[] arr = s.trim().split(" ");
        Stack<String> stack = new Stack<>();
        StringBuilder sb = new StringBuilder();

        for (String str : arr) {
            if (!str.trim().isEmpty()) {
                stack.push(str);
            }
        }

        while (!stack.isEmpty()) {
            sb.append(stack.pop()).append(" ");
        }

        return sb.toString().trim();
    }
}
