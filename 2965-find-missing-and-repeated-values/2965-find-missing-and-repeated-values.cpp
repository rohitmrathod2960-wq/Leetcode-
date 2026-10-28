class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int N = n * n;
        int xr = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                xr ^= grid[i][j];
            }
        }
        for (int i = 1; i <= N; i++) {
            xr ^= i;
        }
        int bit = xr & -xr;
        int x = 0, y = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] & bit)
                    x ^= grid[i][j];
                else
                    y ^= grid[i][j];
            }
        }
        for (int i = 1; i <= N; i++) {
            if (i & bit)
                x ^= i;
            else
                y ^= i;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == x)
                    return {x, y};
            }
        }
        return {y, x};
    }
};