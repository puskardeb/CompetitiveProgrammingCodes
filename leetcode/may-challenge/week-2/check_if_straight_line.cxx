class Solution {
public:
    bool check(int x1, int y1, double m, double k) {
        return ((double)y1 - m * x1 == k);
    }


    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() == 2) {
            return true;
        }

        int x1 = coordinates[0][0];
        int x2 = coordinates[1][0];
        int y1 = coordinates[0][1];
        int y2 = coordinates[1][1];

        if (x2 == x1)   return false;

        double m = (y2 - y1)/(x2 - x1);
        double k = y1 - m * (x1);

        for (int i = 2; i < coordinates.size(); ++i) {
            if (!check(coordinates[i][0], coordinates[i][1], m, k))
                return false;
        }

        return true;
    }
};
