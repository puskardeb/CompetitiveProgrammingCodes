class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        const int n = trust.size();
        unordered_map<int, unordered_set<int>> m;

        for (int i = 0; i < n; ++i) {
            m[trust[i][0]].insert(trust[i][1]);
        }

        int ans = -1;
        int cnt = 0;

        for (int i = 1; i <= N; ++i) {
            if (m.find(i) == m.end()) {
                ans = i;
                ++cnt;
            }
        }

        if (cnt > 1) {
            return -1;
        }

        for (auto it = m.begin(); it != m.end(); ++it) {
            if ((it->second).find(ans) == (it->second).end())
                return -1;
        }

        return ans;
    }
};
