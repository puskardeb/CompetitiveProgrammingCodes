class Solution {
public:
	bool search(int r, int c, int idx, vector<vector<bool>>& visited, const string& word, const vector<vector<char>>& board) {
		if (idx == word.size()) {
			return true;
		}
		
		if (r < 0 || r >= board.size()) {
			return false;
		}
		
		if (c < 0 || c >= board[0].size()) {
			return false;
		}
		
		if (visited[r][c]) {
			return false;
		}
		
		if (word[idx] == board[r][c]) {
			visited[r][c] = true;
			bool ret1 = search(r + 1, c, idx + 1, visited, word, board);
			bool ret2 = search(r, c + 1, idx + 1, visited, word, board);
			bool ret3 = search(r - 1, c, idx + 1, visited, word, board);
			bool ret4 = search(r, c - 1, idx + 1, visited, word, board);
			
			bool ret = ret1 || ret2 || ret3 || ret4;
			if (!ret) {
				visited[r][c] = false;
			}
			return ret;
		}
		return false;
	}

    bool exist(vector<vector<char>>& board, string word) {
		int rows = board.size();
		int cols = board[0].size();


		for (int r = 0; r < rows; ++r) {
			for (int c = 0; c < cols; ++c) {
				if (word[0] == board[r][c]) {
					vector<vector<bool>> visited(rows, vector<bool>(cols, false));
					if (search(r, c, 0, visited, word, board)) {
						return true;
					}
				}
			}
		}

		return false;
    }
};

