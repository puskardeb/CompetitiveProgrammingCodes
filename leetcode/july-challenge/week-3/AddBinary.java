import java.math.BigInteger;

class Solution {
    public String addBinary(String a, String b) {
        BigInteger big1 = new BigInteger(a, 2);
        BigInteger big2 = new BigInteger(b, 2);
        
        BigInteger res = big1.add(big2);
        
        return res.toString(2);
    }
}
