class Solution {
    public boolean isPalindrome(String s) {
        char[] str = s.toCharArray();
        int leftPtr = 0;
        int rightPtr = str.length - 1;
        
        while (leftPtr < rightPtr) {
            if (str[leftPtr] == ' ' || (!Character.isAlphabetic(str[leftPtr]) && !Character.isDigit(str[leftPtr]))) {
                ++leftPtr;
                continue;
            }
            if (str[rightPtr] == ' ' || (!Character.isAlphabetic(str[rightPtr]) && !Character.isDigit(str[rightPtr]))) {
                --rightPtr;
                continue;
            }
            if (Character.toLowerCase(str[leftPtr]) == Character.toLowerCase(str[rightPtr])) {
                ++leftPtr;
                --rightPtr;
            } else {
                return false;
            }
        }
        
        return true;
    }
}
