class Solution {
public:
	void dfs(int src, vector<int>& path, vector<vector<int>>& res, vector<vector<int>>& graph, const int& n) {
		if (src == n - 1) {
			res.push_back(path);
			return;
		}
		
		for (int node : graph[src]) {
			path.push_back(node);
			dfs(node, path, res, graph, n);
			path.pop_back();
		}
	}

	vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
		const int n = graph.size();
		vector<int> path;
		vector<vector<int>> res;
		
		int src = 0;
		
		path.push_back(src);
		dfs(src, path, res, graph, n);
		
		return res;
	}
};
