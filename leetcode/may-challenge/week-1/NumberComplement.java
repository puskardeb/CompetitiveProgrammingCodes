class Solution {
    public int findComplement(int num) {
        String s = Integer.toBinaryString(num);
        char[] ch = s.toCharArray();

        for (int i = 0; i < ch.length; ++i) {
            ch[i] = (ch[i] == '1') ? '0' : '1';
        }

        int res = Integer.parseInt(new String(ch), 2);
        return res;
    }
}
