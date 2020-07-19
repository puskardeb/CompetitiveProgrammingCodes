class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> g(numCourses);
        vector<int> inorder(numCourses, 0);
        vector<int> res;
        queue<int> q;
        int cnt = 0;
        
        for (int i = 0; i < prerequisites.size(); ++i) {
            int a = prerequisites[i][0];
            int b = prerequisites[i][1];
            
            g[b].push_back(a);
        }
        
        for (int i = 0; i < numCourses; ++i) {
            for (int j = 0; j < g[i].size(); ++j) {
                ++inorder[g[i][j]];
            }
        }
        
        for (int i = 0; i < numCourses; ++i) {
            if (inorder[i] == 0) {
                q.push(i);
            }
        }
        
        while (q.size() > 0) {
            int node = q.front();
            res.push_back(node);
            q.pop();
            for (int j = 0; j < g[node].size(); ++j) {
                --inorder[g[node][j]];
                if (inorder[g[node][j]] == 0) {
                    q.push(g[node][j]);
                }
            }
            ++cnt;
        }
        
        
        return cnt == numCourses ? res : vector<int>();
    }
};
