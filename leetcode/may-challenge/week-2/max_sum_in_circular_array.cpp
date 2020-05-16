class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        const int n = A.size();
        const int INF = 1e9;
        int res = -INF;
        int mn = INF;
        int mx = -INF;
        int cur_max = -INF;
        int cur_min = INF;
        int total = 0;

        for (int j = 0; j < n; ++j) {
            cur_max = max(A[j], cur_max + A[j]);
            cur_min = min(A[j], cur_min + A[j]);
            mx = max(mx, cur_max);
            mn = min(mn, cur_min);
            total += A[j];
        }

        // return max(mx, total - mn);
        return mx > 0 ? max(mx, total - mn) : mx;
    }
};
