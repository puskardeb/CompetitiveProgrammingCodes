class Solution {
public:
	int climbStairs(int n) {
		int first = 1;
		int second = 1;
		int res = 1;
		
		for (int i = 2; i <= n; ++i) {
			res = first + second;
			first = second;
			second = res;
		}
		
		return res;
	}
};
