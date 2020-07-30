class Solution {
public:
	int dfs(int r, int c, vector<vector<int>>& grid) {
		if (r < 0 || r >= grid.size()) {
			return 1;
		}
		
		if (c < 0 || c >= grid[0].size()) {
			return 1;
		}
		
		if (grid[r][c] == 0) {
			return 1;
		}
		int ans = 0;

		if (grid[r][c] != -1) {
			grid[r][c] = -1;
			ans += dfs(r, c + 1, grid);
			ans += dfs(r + 1, c, grid);
			ans += dfs(r, c - 1, grid);
			ans += dfs(r - 1, c, grid);
		}
		return ans;
	}
	
	int islandPerimeter(vector<vector<int>>& grid) {
		const int rows = grid.size();
		if (rows == 0)	return 0;
		const int cols = grid[0].size();
		
		int res = 0;
		
		for (int r = 0; r < rows; ++r) {
			for (int c = 0; c < cols; ++c) {
				if (grid[r][c] == 1) {
					res = dfs(r, c, grid);
					return res;
				}
			}
		}
		
		return res;
	}
};
