class Solution {
    int prevColor;
    int nr;
    int nc;
    vector<vector<bool>> visited;

public:

    vector<pair<int, int>> getNeighbours(vector<vector<int>>& image, int sr, int sc) {
        vector<pair<int, int>> res;
        res.emplace_back(make_pair(sr + 1, sc));
        res.emplace_back(make_pair(sr - 1, sc));
        res.emplace_back(make_pair(sr, sc + 1));
        res.emplace_back(make_pair(sr, sc - 1));
        return res;
    }


    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        prevColor = image[sr][sc];
        nr = image.size();
        nc = image[0].size();
        vector<vector<bool>> visited(nr, vector<bool>(nc));
        dfs(image, sr, sc, newColor, visited);
        return image;
    }

    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor, vector<vector<bool>>& visited) {
        vector<pair<int,int>> neighbours = getNeighbours(image, sr, sc);
        image[sr][sc] = newColor;
        visited[sr][sc] = true;
        for (pair<int, int> i : neighbours) {
            if (i.first < 0)    i.first = 0;
            else if (i.first > nr - 1)   i.first = nr - 1;
            if (i.second < 0)    i.second = 0;
            else if (i.second > nc - 1)   i.second = nc - 1;

            if (prevColor == image[i.first][i.second] && !visited[i.first][i.second]) {
                visited[i.first][i.second] = true;
                image[i.first][i.second] = newColor;
                dfs(image, i.first, i.second, newColor, visited);
            }
        }
    }
};
