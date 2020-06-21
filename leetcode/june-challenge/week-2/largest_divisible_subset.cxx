class Solution {
public:
	vector<int> largestDivisibleSubset(vector<int>& nums) {

		vector<int> res;
		const int n = nums.size();

		if (n == 0) {
			return res;
		}

		vector<int> dp(n, 1);
		vector<int> prev_idx(n, -1);
		sort(nums.begin(), nums.end());
		int max_idx = 0;

		for (int i = 1; i < n; ++i) {
			for (int j = 0; j < i; ++j) {
				if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
					dp[i] = dp[j] + 1;
					prev_idx[i] = j;
				}
			}

			if (dp[max_idx] < dp[i]) {
				max_idx = i;
			}
		}

		int p = max_idx;
		while (p >= 0) {
			res.push_back(nums[p]);
			p = prev_idx[p];
		}

		return res;
	}
};
